#include <stdio.h>

void func(char sr[]);

int main(void){
    char str[] = "COMPUTER";
    func(str);
    return 0;

}

void func(char sr[]){
    printf("%s\n", sr);
}