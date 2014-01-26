/*
* File: 101044044HW01Lib.cpp
*
* Course: CSE241 Object Oriented Programming
*
* Author: Samet Sait Talayhan
* Number: 101044044
*
* Created on 4:55:26 pm GMT/IST | Sunday, October 6, 2013.
*/ 
#include <iostream>
#include "101044044HW01Lib.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void printUsage()
{
	cout<<"SYNOPSIS\n"<<"\tsgrep [OPTIONS] [PATTERN]\n"
			  <<"\tExample useage:\n"
			  <<"\t\tsgrep -i -n [PATTERN]\n"
		<<"OPTIONS\n"<<"\t-i, --ignore-case\n"
	 <<"\t\t Ignore case distinctions in both the PATTERN and the input\n"
	 <<"\t\t files.\n"
	 <<"\t-n, --line-number\n"
	 <<"\t\t Prefix each line of output with the 1-based line number within\n"
	 <<"\t\t its input file.\n";
}
void getText(char text[MAX_ROW_SIZE][MAX_COLUMN_SIZE])
{
	char line[MAX_COLUMN_SIZE];
	int i = 0;

	do
	{
		cin.getline(line, MAX_COLUMN_SIZE);
		if((strcmp(line,"exit") == 0) || (i > MAX_ROW_SIZE -2))
		{
			break;
		}
		strcpy(text[i],line);
	}while(++i);

}
void findPattern(char pattern[MAX_CHAR_SIZE], 
		char text[MAX_ROW_SIZE][MAX_COLUMN_SIZE], int* foundNumbers)
{
	int k,i,j,m,n;
	int counter = 1;

	m = strlen(pattern);

	for(k=0; k < MAX_ROW_SIZE+1; ++k)
	{
		n = strlen(text[k]) + 1;
		for (i = 0; i < (n-m); ++i) {
			j = 0;
			while( j < m && pattern[j]==text[k][i+j])
			{
				++j;
			}
			if( j == m)
			{
				foundNumbers[counter] = k;
				++counter;
				break;
			}
		}
	}

	foundNumbers[0] = counter;
}
void fillNull(char text[MAX_COLUMN_SIZE][MAX_COLUMN_SIZE])
{
	for (int i = 0; i < MAX_ROW_SIZE; ++i)
	{
		for (int j = 0; j < MAX_COLUMN_SIZE; ++j)
		{
			text[i][j] = '\0';
		}
	}
}
void toLower(char text[][MAX_COLUMN_SIZE], char pattern[])
{
   /* Not implemented yet. */
}
int strlen(char *str) {
	if (!str) {
		return 0;
	}

	char *ptr = str;
	while (*str) {
		++str;
	}

	return str - ptr;
}

char * strcpy(char *s1, const char *s2)
{
    char *s = s1;
    while ((*s++ = *s2++) != 0)
	;
    return (s1);
}

int
strcmp(const char *s1, const char *s2)
{
    for ( ; *s1 == *s2; s1++, s2++)
	if (*s1 == '\0')
	    return 0;
    return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
}
