/*
 * =====================================================================================
 *
 *       Filename:  ch2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/30/22 21:49:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "ch2.h"

void getstr(char s[], int limit) {
	int i;
	char c;
	for (i = 0; i < limit && (c = getchar()) != '\0' && c != '\n'; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
}

void squeeze(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
}
