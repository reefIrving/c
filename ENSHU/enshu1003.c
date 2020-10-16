#include <stdio.h>

int main(void){
    int data1[10] = {10, 15, 22, 45, 9, 66, 71, 4, 37, 82};
    int data2[10];
    int *p1, *p2;
    int cnt = 0;

    p1 = data1;
    p2 = data2;

    /*奇数検知*/
    while (*p1 != '\0')
    {
        /* code */
        if((*p1 % 2) == 0){
            p1++;
        }else if ((*p1 % 2) == 1)
        {
            *p2 = *p1;
            p1++;
            p2++;
        }
        
    }

    *p2 = '\0';
    p2 = data2;

    /*出力*/
    printf("実行結果\n");
    while (*p2 != '\0')
    {
        /* code */
        printf("%d\n", *p2);
        p2++;
        cnt++;
    }
    printf("格納庫数 = %d\n",cnt);

    return 0;
}