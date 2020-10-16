#include <stdio.h>

int main(void){
    char str[] = "Computer";
    char *p;
    p = str;

    while(*p != '\0'){
        putchar(*p);
        *p++;
    }

    putchar('\n');

    return 0;
}