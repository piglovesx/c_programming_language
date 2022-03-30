#include <stdio.h>

/**
 * max char count from standard input
 */
#define MAXLINE 100

/**
 * get str from standard input
 */
void getstr(char s[], int limit);

/**
 * remove c occurs in s 
 */
void squeeze(char s[], int c);

void getstr(char s[], int limit) {
	int i;
	char c;
	for (i = 0; i < limit && (c = getchar()) != '\0' && c != '\n'; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
}