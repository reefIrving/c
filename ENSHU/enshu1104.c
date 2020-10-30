#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int sum;
    if(argc != 3){
        puts("引数の個数が違います");
        return 0;
    }

    sum = atoi(argv[1]) + atoi(argv[2]);
    printf("合計 = %d\n", sum);
    return 0;
}