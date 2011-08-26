#include <stdio.h>

int my_strlen(const char *s)
{
    int i;

    for(i = 0; s[i] != '\0'; i++)
        ;

    return i;
}

int main(int argc, char *argv[])
{
    printf("strlen(\"%s\") = %d\n", argv[1], my_strlen(argv[1]));
    return 0;
}
