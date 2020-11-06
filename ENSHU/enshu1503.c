#include <stdio.h>

#define NINZU 5
#define KAMOKU 4

struct seiseki
{
    int no;
    int kamoku[KAMOKU];
};

int main ( void )
{
    struct seiseki mycls[NINZU+1]=
    {
        {1001, 85, 74, 63, 90},
        {1002, 78, 65, 70, 62},
        {1003, 89, 92, 88, 76},
        {1004, 32, 48, 66, 25},
        {1005, 92, 76, 81, 98},
        {-1, 0, 0, 0, 0}
    };
    struct seiseki *my_p;
	char *kname[] = { "国語", "数学", "理科", "社会" };
	int i, j;
	double heikin;

	my_p = mycls;
	for ( j = 0; j < KAMOKU; j++ ) {
		i = 0;
		heikin = 0.0;
		while( ( my_p+i )->no != -1 ) {
			heikin = heikin + ( my_p+i )->kamoku[j];
			i++;
		}
		heikin = heikin / i;
		printf( "%s 平均 = %6.2f\n", kname[j], heikin );
	}
	
	return 0;
    
}
