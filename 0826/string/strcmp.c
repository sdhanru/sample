#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("strncmp:%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
    return 0;
}
