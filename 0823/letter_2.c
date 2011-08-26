#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func(char *letter, int len)
{
    int i, tmp;

    srand(time(NULL));
    for(i = 0; i < len; ){
        tmp = rand() % 26;
        if(letter[tmp] == 0){
            letter[tmp] = tmp + 'a';
            i++;
        }
    }
}

int main(void)
{
    char letter[26] = {0};
    int i;

    func(letter, 26);
    for(i = 0; i < 26; i++)
        printf("%c ", letter[i]);
    printf("\n");
    return 0;
}
