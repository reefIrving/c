#include <stdio.h>

int main( void )
{
	int a, b;
	double c, d;
	char e, f;
	char str[] = "COMPUTER";	/* 文字列定数COMPUTERの設定 */
	
	a = 5;		/* 10進定数 5 の設定 */
	b = 0x2fb;	/* 16進定数 2fb の設定 */
	c = 3.14;		/* 浮動小数点定数 3.14 の設定 */
	d = 2.548e2;	/* 浮動小数点定数 2.548×102( 指数形式 )設定 */
	e = 'A';		/* 文字定数 A の設定 */
	f = '8';		/* 文字定数 8 の設定 */
	
	printf( "str = %s\n", str );
	printf( "a = %d\n", a );
	printf( "b = %x\n", b );
	printf( "c = %f\n", c );
	printf( "d = %e\n", d );
	printf( "e = %c\n", e );
	printf( "f = %c\n", f );
	
	return 0;
}
