#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	FILE *fw;
	char maker[10], name[12];
	int cc;

	if( ( fw=fopen( "car.dat", "a" ) ) == NULL ) {
		printf( "ファイルがオープンできません\n" );
		exit( EXIT_FAILURE );
	}

	while( 1 ) {
		printf( "メーカー名を入力して下さい（終了条件：end） " );
		scanf( "%s", maker );
		if( strcmp( maker, "end" ) == 0 )
			break;
		printf( "車種を入力して下さい " );
		scanf( "%s", name );
		printf( "排気量を入力して下さい " );
		scanf( "%d", &cc );

		fprintf( fw, "メーカー名：%s ", maker );
		fprintf( fw, "車種：%s ", name );
		fprintf( fw, "排気量：%d\n", cc );
	}
	fclose( fw );
	return 0;
}