#include <stdio.h>
#include <ctype.h>

int convert(char c, int (*f)(int));

int main(int argc, char *argv[]) {
    if (argc != 2) {
	printf("arg count error");
	return -1;
    }
    char *t = argv[1];
    int c;

    while ((c = getchar()) != EOF) {
	putchar(convert(c, (*t == '1') ? tolower : toupper));
    }
    return 0;
}

int convert(char c, int (*f)(int)) {
	return (*f)(c);
}
