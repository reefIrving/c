#include <stdio.h>

int main( void ){
    int data1[6] = {18, 25, 46, 11, 3, 76};
    int data2[6];

    data2[0] = data1[5];
    data2[1] = data1[3];
    data2[2] = data1[2];
    data2[3] = data1[0];
    data2[4] = data1[1];
    data2[5] = data1[4];

    printf( "data2[0] = %d\n", data2[0] );
	printf( "data2[1] = %d\n", data2[1] );
	printf( "data2[2] = %d\n", data2[2] );
	printf( "data2[3] = %d\n", data2[3] );
	printf( "data2[4] = %d\n", data2[4] );
	printf( "data2[5] = %d\n", data2[5] );

    return 0;

<<<<<<< HEAD
}
=======
}
>>>>>>> 32d2ac801cdf7b25434f45b88c9dbb90c1abb45a
