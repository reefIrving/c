#include <stdio.h>
#include <ctype.h>

int main(void){
    int i, ii;
    int cnt[26] = {0};

    printf("文字を入力してください。(終了条件：Ctrl+Z）\n");
    while((i = getchar()) != EOF){
        if(isupper(i) != 0){
            cnt[i - 'A']++;
        }else if(islower(i) != 0){
            cnt[i - 'a']++;
        }
    }

    for(ii = 0; ii < 26; ii++){
        printf("%c : %3d個入力\t\t", 'a'+ii, cnt[ii]);
        if (i%3 == 2)
        {
            /* code */
            putchar('\n');
        }
        
    }
    return 0;
}