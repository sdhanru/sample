#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char dest[5];
    strncpy(dest, argv[1], 5);
    dest[4] = '\0';
    printf("strncpy:%s\n", dest);

    return 0;
}
