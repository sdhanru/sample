#include <stdio.h>
#include <stdarg.h>

void printlist(int n,...)
{
    va_list ap;
    char *p;

    va_start(ap, n);
    
    do{
        p = va_arg(ap, char *);
        if(p == NULL)
            break;
        puts(p);
    }while(1);

    va_end(ap);
}

int main(void)
{   
    printlist(0, "hello", "world", "foo", "NULL", NULL);
    return 0;
}
