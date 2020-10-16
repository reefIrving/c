#include <stdio.h>

int main( void )
{
	float a, b;	/* 変数 a と b を単精度浮動小数点型で宣言 */
	double c;		/* 変数 c を倍精度浮動小数点型で宣言 */
	long seki;	/* 変数 seki を倍長整数型で宣言 */
	int i = 180;	/* 変数 i を単長整数型で宣言し、180で初期化 */
	int j = 500;	/* 変数 j を単長整数型で宣言し、500で初期化 */
	char ch = 'S';	/* 変数 ch を文字型で宣言し、文字定数 S で初期化 */
	
	a = 62.5;
	b = 23.3;
	
	c = a * b;
	seki = ( long )i * j;
	
	printf( "ch = %c\n", ch );		/* ch を出力 */
	printf( "c = %f\n", c );		/* c を出力 */
	printf( "seki = %ld\n", seki );	/* seki を出力 */
	
	return 0;
}

