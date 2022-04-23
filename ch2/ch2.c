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
