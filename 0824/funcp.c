#include <stdio.h>
typedef int (*funcp_t[2])(int, int);

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main(void)
{
    funcp_t p[3];
    int i;

    i = 4;

    return 0;
}
