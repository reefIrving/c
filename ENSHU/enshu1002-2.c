#include <stdio.h>
#include <ctype.h>

int main( void )
{
	char str[] = "AbcDefGHijk1234lmNOP";
	char *p;

	p = str;
	while ( *p != '\0' ) {
		*p = toupper( *p );
		p++;
	}
	printf( "str = %s\n", str );

	return 0;
}
