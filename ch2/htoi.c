#include <stdio.h>
#include <strings.h>
#include <ctype.h>

#define MAXLINE 100

int get_line(char line[], int lim);
int htoi(char hex[]);

int main(void) {
    char hex[MAXLINE];
    get_line(hex, MAXLINE);
    printf("%d", htoi(hex));
    return 0;
}

int get_line(char line[], int lim) {
    char c;
    int i = 0;
    while(--lim > 0 && (c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
    }

    line[i] = '\0';
    return i;
}

int htoi(char hex[]) {
    int result = 0;

    int i = 0, len = strlen(hex);

    while (i < len-1)
    {
        if (hex[i] == '0' && (hex[i + 1] == 'x' || hex[i + 1] == 'X')) {
            i += 2;
        } else {
            return -1;
        }

        int temp = tolower(hex[i]);

        if (isdigit(temp)) {
            temp -= '0';
        } else if (isalpha(temp)) {
            temp -= 'a' - 10;
        } else {
            return -1;
        }

        result = (result  + temp) * 16;
        
        i++; 
    }
    return result;
}