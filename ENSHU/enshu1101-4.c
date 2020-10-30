#include <stdio.h>

int func(int a, int b){
    if(a <= b){
        return a;
    }
    else{
        return b;
    }
}

int main(void){
    int a, b, c;
    puts("二つの整数値を入力");
    scanf("%d %d", &a, &b);

    c = func(a, b);

    printf("小さいほう = %d\n", c);
    return 0;
}