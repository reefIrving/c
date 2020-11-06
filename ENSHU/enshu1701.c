#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	FILE *fin, *fout;
	char infile[40], outfile[40];
	int c;

	printf( "入力ファイル名 = " );
	gets( infile );
	printf( "出力ファイル名 = " );
	gets( outfile );
	if( ( fin=fopen( infile, "r" ) ) == NULL ) {
		printf( "入力ファイルを開けませんでした\n" );
		exit( EXIT_FAILURE );
	}
	if( ( fout=fopen( outfile, "w" ) ) == NULL ) {
		printf( "出力ファイルを開けませんでした\n" );
		exit( EXIT_FAILURE );
	}
	while( ( c=getc( fin ) ) != EOF ) {
		putc( c, fout );
	}
	fclose( fin );
	fclose( fout );
	return 0;
}