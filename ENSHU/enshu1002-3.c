#include <stdio.h>

int main(void){
    char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str2[30];
    char *p1, *p2;

    p1 = str1;
    p2 = str2;

    /*最後まですっとばし*/
    while (*p1 != '\0')
    {
        p1++;
    }

    /*str2へ挿入*/
    while (p1 > str1)
    {
        p1--;
        *p2  = *p1;
        p2++;
    }

    *p2 = '\0';

    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;    
    
}