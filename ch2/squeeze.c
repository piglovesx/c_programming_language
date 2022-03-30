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


