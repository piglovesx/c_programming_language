#include <stdio.h>
#include "ch2.h"

int any(char s1[],char s2[]);

int main(void) {
    char s1[MAXLINE], s2[MAXLINE];
    getstr(s1,MAXLINE);
    getstr(s2, MAXLINE);
    printf("%d\n", any(s1,s2));
}

/* return the location in s1 when s2 first occurs */
int any(char s1[], char s2[]) {
    int i, j, r;

    for(i = 0; s1[i] != '\0'; i++) {
	for(j = 0; s2[j] != '\0'; j++) {
	    if (s1[i] == s2[j]) {
		r = i;
		break;
	    }
	    if (r !=0) {
		break;
	    }
	}
    }
    return r; 
}
