#include <stdio.h>

int main(void)
{
    /* code */

    int i, gosen, sen, gohyaku, hyaku, goju, ju, goen, ichien, man, tmp;
    
    i = 468;
    man = 10000;

    tmp = man - i;

    gosen = tmp / 5000;
    tmp -= gosen * 5000;

    sen = tmp / 1000;
    tmp -= sen * 1000;

    gohyaku = tmp / 500;
    tmp -= gohyaku * 500;

    hyaku = tmp / 100;
    tmp -= hyaku * 100;

    goju = tmp / 50;
    tmp -= goju * 50;

    ju = tmp / 10;
    tmp -= ju * 10;

    goen = tmp / 5;
    tmp -= goen * 5;

    ichien = tmp;

    printf("五千円札の枚数 = %d\n", gosen);
    printf("千円札の枚数 = %d\n", sen);
    printf("五百円玉の枚数 = %d\n", gohyaku);
    printf("百円玉の枚数 = %d\n", hyaku);
    printf("五十円玉の枚数 = %d\n", goju);
    printf("十円玉の枚数 = %d\n", ju);
    printf("五円玉の枚数 = %d\n", goen);
    printf("一円玉の枚数 = %d\n", ichien);

    return 0;
<<<<<<< HEAD
}

=======

}
>>>>>>> 32d2ac801cdf7b25434f45b88c9dbb90c1abb45a
