#include <stdio.h>


#define NINZUU 20

struct list {
	char name[20];
	double taijyu;
	double sincyou;
};

void print_dt( struct list *sp );

int main( void )
{
	struct list sintai[NINZUU+1];
	int i=0;

	printf( "氏名、体重、身長を入力しなさい。（終了条件：Ctrl+Z）\n" );
	while( ( scanf( "%s %lf %lf", sintai[i].name, &sintai[i].taijyu, 
		&sintai[i].sincyou )!=EOF ) && i<NINZUU ) {
		i++;
	}
	sintai[i].taijyu = -1;
	sintai[i].sincyou = -1;

	print_dt( sintai );	

	return 0;
}


void print_dt( struct list *sp )
{
	printf( "氏名　　　　　　　　　体重　　身長\n" );
	while( sp->taijyu != -1 && sp->sincyou != -1 ) { 
		printf( "%-20s %5.1f 　%5.1f\n", sp->name, sp->taijyu, sp->sincyou );
		sp++;
	}
}