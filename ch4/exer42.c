#include <ctype.h>
#include <math.h>
#include <stdio.h>

#include "../ch2/ch2.h"
#include "ch4.h"

double atofwithe(char s[]);

int main(void) {
    char s[MAXLINE];
    getstr(s, MAXLINE);

    printf("%f\n", atofwithe(s));
    return 0;
}


double atofwithe(char s[]) {
    double val;
    val = atof(s);
    printf("%f\n", val);

    int i;
    for (i = 0; s[i] !='e' && s[i] != 'E' && s[i] != '\0'; i++) ;
    if (s[i] == '\0')
	return val;
    if (s[++i] == '-') {
	int len = s[++i] - '0';
	val = val / pow(10.0, len);
    } else {
	int len  = s[i] - '0';
	val = val * pow(10.0, len);
    }
    return val;
}
