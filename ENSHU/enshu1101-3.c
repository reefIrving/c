#include <stdio.h>

int func (int a, int b){
    return a * b; 
}

int main(void){
    int a, b, c;
    a = 20;
    b = 10;

    c = func(a, b);

    printf("C = %d\n", c);

    return 0;

}