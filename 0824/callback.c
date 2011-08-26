#include <stdio.h>
typedef void (*funcp_t)(void *);

void callback1(void *arg)
{
    printf("%s\n", (char *)arg);
}

void callback2(void *arg)
{
    printf("%d\n", (int)arg);
}
void foo(funcp_t p, void *arg)
{
    p(arg);
    p(arg);
}

int main(void)
{
    foo(callback2, (void *)0);
    return 0;
}
