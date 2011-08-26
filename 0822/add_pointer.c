#include <stdio.h>


int *func(int *p)
{
    int n;
    p = &n;
    return p;
}

int main(void)
{
    int *p, num[10] = {10, 20, 30}, i;

    for(i = 0; i < 3; i++)
        printf("num[%d]:%p, %d\n", i, &num[i], num[i]);

    func(NULL);

    return 0;
}
