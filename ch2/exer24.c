#include <stdio.h>
#include "ch2.h"

void squeeze2(char s[], char t[]);

int main(void) {
	char s[MAXLINE];
	char t[MAXLINE];
	
	getstr(s, MAXLINE);
	getstr(t, MAXLINE);

	squeeze2(s, t);

	printf("result: %s\n", s);
}

void squeeze2(char s[], char t[]) {
	char c;
	int i;

	for (i = 0; i < MAXLINE && (c = t[i]) != '\0'; i++) {
		squeeze(s, c);
	}
}