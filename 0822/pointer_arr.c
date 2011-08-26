#include <stdio.h>

int main(void)
{
    char *strp[5] = {"Sunwukong", "Tangseng", "Zhubajie", "Shaheshang", "Rulaifo"};
    int i;

    for(i = 0; i < 5; i++)
        printf("strp[%d]:%p,%s\n", i, strp[i], strp[i]);

    return 0;
}
