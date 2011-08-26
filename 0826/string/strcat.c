#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char dest[20] = "abcd";

    strncat(dest, argv[1], 5);
    printf("strncat:%s\n", dest);

    return 0;
}
