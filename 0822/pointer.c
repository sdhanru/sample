#include <stdio.h>
#define LEN 10

void init(int *num, int len)
{
    int *p, len_cp;
    
    printf("in init, sizeof(num) = %d\n", sizeof(num));
    len_cp = sizeof(num) / sizeof(num[0]);
    printf("in init, len = %d\n", len_cp);

    for(p = num; p < num + len; p++)
        *p = (int)(p - num) + 10;
}

int main(void)
{
    int *p, num[LEN];
    int i, len;

    len = sizeof(num) / sizeof(num[0]);
    printf("len = %d\n", len);

    init(num, LEN);

    for(i = 0; i < LEN; i++)
        printf("%d ", num[i]);
    putchar('\n');

    return 0;
}
