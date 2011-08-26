#include <stdio.h>

char *my_strcpy(char *dest, const char *s)
{
    int i;
    for(i = 0; (dest[i] = s[i]); i++)
        ;
    return dest;
}

int main(int argc, char *argv[])
{
    char dest[30];
    printf("strcpy:%s\n", my_strcpy(dest, argv[1]));
    return 0;
}
