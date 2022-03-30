#include <stdio.h>
#include "ch2.h"

int main(void) {
    char c;
    char s[MAXLINE];
    getstr(s, MAXLINE);
    while ((c = getchar()) != '\0') {
        if (c == '\n')
        {
            continue;
        } else {
            break;
        }
    }
    squeeze(s, c);

    printf("%s\n", s);
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
