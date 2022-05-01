#include<stdio.h>
void strcat1(char *s, char *t);

int main(void) {
    char *s = "hello";
    char *t = " world";
    strcat1(s, t);
    printf("%s", s);
    return 0;
}

void strcat1(char *s, char *t) {
    while(*s != '\0') {
	s++;
    }

    for(;*t != '\0';s++, t++) {
	*s = *t;
    }

    *s = *t; 
}
