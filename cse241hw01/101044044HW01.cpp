/*
 * Course: CSE241 Object Oriented Programming
 *
 * Author: Samet Sait Talayhan
 * Number: 101044044
 *
 * Created on 4:55:26 pm GMT/IST | Sunday, October 6, 2013.
 *
 * Project Description: 
 * sgrep.cpp
 *
 *  sgrep is simplified version of grep [Unix command line utility].
 *  It will only match strings from standard input.
 *  * This sgrep version also works with the wild card character.
 *  	For example:
 *  	sgrep a?c
 *  	abc def
 *  	adc adef
 *  	def acd
 *
 *  	Output:
 *  	abc def
 *  	adc adef
 *
 *   sgrep options -i and -n
 *   #####################################################
 *   NOTE: -i option and wild card option not implemented.
 *   #####################################################
 */
#include <iostream>
#include "101044044HW01Lib.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int
main(int argc, char* argv[])
{

	if( (argc < 2 || argc > 4) )
	{
		printUsage();
		return (EXIT_CODE_USAGE);
	}
	//to check case sensitive option
	int ignoreCase = CLOSE;
	// to check show line number option
	int showLineNumbers = CLOSE;
	
	// get pattern from the console
	char pattern[MAX_CHAR_SIZE];
	if (argc == 3)
	{
		if ( (strcmp(argv[1],"-i") != 0) && (strcmp(argv[1],"-n") != 0) )
		{
			printUsage();
			return (EXIT_CODE_USAGE);
		}
		else if( (strcmp(argv[1],"-i") == 0) )
		{
			ignoreCase = OPEN;
		}
		else
		{
			showLineNumbers = OPEN;
		}
		strcpy(pattern,argv[2]);
	}
	else if (argc == 4)
	{
		if ( (strcmp(argv[1],"-i") != 0) || (strcmp(argv[2],"-n") != 0) )
		{
			printUsage();
			return (EXIT_CODE_USAGE);
		}
		else
		{
			ignoreCase = OPEN;
			showLineNumbers = OPEN;
			strcpy(pattern,argv[3]);
		}
	}
	else
	{
		strcpy(pattern,argv[1]);
	}

	if( strlen(argv[1]) >= MAX_CHAR_SIZE ) //control pattern size
	{
		cout<<"-------- EXIT_CODE_2_[OVERFLOW] --------\n"
			<<"\tPattern size is bigger than capacity.\n"
			<<"\tEnter pattern which is max size of 10 char.\n";
		return(EXIT_CODE_OVERFLOW);
	}
	// Get text from user or another program output using pipe(|)
	char text[MAX_ROW_SIZE][MAX_COLUMN_SIZE];
	fillNull(text); // fill text \0
	getText(text);

	// keep number of found pattern lines
	int foundNumbers[MAX_ROW_SIZE];
	findPattern(pattern, text, foundNumbers);

	if( showLineNumbers == OPEN )
	{
		for (int var = 1; var < foundNumbers[0]-1; ++var)
		{
			cout << foundNumbers[var]  <<": "
			     << text[foundNumbers[var]] << endl;
		}
	}
	else
	{
		for (int var = 1; var < foundNumbers[0]-1; ++var)
		{
			cout << text[foundNumbers[var]] << endl;
		}
	}

	return 0;
}
