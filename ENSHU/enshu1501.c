#include <stdio.h>

struct  syain_dt
{
    long no;
    char name[20];
    char yaku[20];
    int nensu;
    long kihon;

};

int main(void)
{
    struct syain_dt syomu[20]=
    {
        /* 庶務課 */
        {78027, "神保直樹", "課長", 21, 346780},
        {84004, "相原彰子", "主任", 15, 223640},
        {87022, "本郷幸子", "", 12, 208760},
        {93042, "三上葵", "", 6, 176530},
        {95005, "佐々木翠", "", 4, 166700},
        {99009, "長崎宏美", "", 1, 150140},
        {0, "", "", 0, 0},
    };

    int i;
    printf ("社員番号\t氏名\t\t役職\t勤続年数\t基本給\n");

    for(i = 0; syomu[i].no != 0; i++){
        printf("%5ld\t%-12s\t\t%5s\t%6d\t%6ld\n", syomu[i].no, syomu[i].name, syomu[i].yaku, syomu[i].nensu, syomu[i].kihon);
    }    


    return 0;
}
