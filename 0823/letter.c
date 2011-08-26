#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func(char *letter, int len)
{
    int i, flag = 0, tmp;

    srand(time(NULL));
    for(i = 0; i < len; ){
        tmp = rand() % 26;
        if(((flag >> tmp) & 0x01) == 0){
            letter[i++] = tmp + 'a';
            flag |= (0x01 << tmp);
        }
    }
}

int main(void)
{
    char letter[26];
    int i;

    func(letter, 26);
    for(i = 0; i < 26; i++)
        printf("%c ", letter[i]);
    printf("\n");
    return 0;
}
