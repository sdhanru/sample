#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *dest, const char *src)
{
    int i;

    if(dest == NULL)
        dest = malloc(20);

    for(i = 0; (dest[i] = src[i]); i++)
        ;
    return dest;
}

int main(int argc, char *argv[])
{
    char *dest = NULL;

    printf("strcpy:%s\n", dest = my_strcpy(dest, argv[1]));
    free(dest);
    return 0;
}
