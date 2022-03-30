#include <stdio.h>
#define MAX 100

void strcat1(char s[], char t[]);

int main(void) {
    int i;
    char c;
    char s[MAX], t[MAX];

    for (i = 0; i < MAX && (c = getchar()) != '\0' && c != '\n'; i++) {
        s[i] = c;
    }

    s[i] = '\0';

    for (i = 0; i < MAX && (c = getchar()) != '\0' && c != '\n'; i++) {
        t[i] = c;
    }

    t[i] = '\0';

    strcat1(s, t);

    printf("%s\n", s);
}

void strcat1(char s[], char t[]) {

    int i, j;
    i = j = 0;
    while (s[i] != '\0') {
        i++;
    }

    while ((s[i++] = t[j++]) != '\0') {

    }
}
