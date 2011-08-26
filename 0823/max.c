#include <stdio.h>
#include <stdarg.h>

int max(int n, ...)
{
    va_list ap;
    int max_n, tmp;

    va_start(ap, n);
    max_n = va_arg(ap, int);
    n--;

    while(n > 0){
        tmp = va_arg(ap, int);
        if(max_n < tmp)
            max_n = tmp;
        n--;
    }

    va_end(ap);
    return max_n;
}

int main(void)
{
    printf("max:%d\n", max(3, 2, 10, 6));
    printf("max:%d\n", max(4, 5, 18, 32, 15));
    return 0;
}

