#include <stdio.h>

int my_strlen(const char *s)
{
    int i;
    for(i = 0; s[i]; i++)
        ;
    return i;
}

int main(int argc, char *argv[])
{
    printf("strlen:%d\n", my_strlen(argv[1]));
    return 0;
}
