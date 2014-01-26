/*
* File: 101044044HW01Lib.h
*
* Course: CSE241 Object Oriented Programming
*
* Author: Samet Sait Talayhan
* Number: 101044044
*
* Created on 4:55:26 pm GMT/IST | Sunday, October 6, 2013.
*/ 
#define OPEN 1
#define CLOSE 0

#define TRUE 1
#define FALSE 0

#define MAX_CHAR_SIZE 10
#define MAX_ROW_SIZE 20
#define MAX_COLUMN_SIZE 80
#define EXIT_INPUT "exit"
#define EXIT_CODE_USAGE 1
#define EXIT_CODE_OVERFLOW 2

/**
 * Input: Get two strings.
 * Output: -1 , 0 , 1
 * This function compare 2 strings. */
int
strcmp(const char *s1, const char *s2);

/**
 * Input: Get two strings.
 * Output: char *
 * This function prints usage. */
char *
strcpy(char *s1, const char *s2);

/**
 * Input: void
 * Output: void
 * This function fill null members of given array. */
void fillNull(char text[][MAX_COLUMN_SIZE]);

/**
 * Input: char* string.
 * Output: int string length
 * This function return string lengt. */
int strlen(char *str);

/**
 * Input: void
 * Output: void
 * This function prints usage. */
void printUsage();

/**
 * Input: void
 * Output: void
 * This function get text and put 2-D array that is given argument. */
void getText(char text[][MAX_COLUMN_SIZE]);

/**
 * Input: void
 * Output: void
 * This function get text and put 2-D array that is given argument. */
void toLower(char text[][MAX_COLUMN_SIZE], char pattern[]);

/**
 * Input: void
 * Output: void
 * The algorithm implements brute-force string matching. */
void findPattern(char pattern[MAX_CHAR_SIZE], char text[][MAX_COLUMN_SIZE],
		int* foundNumbers);
