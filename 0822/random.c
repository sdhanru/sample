#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n[10], i;

    srand(time(NULL));
    for(i = 0; i < 10; i++)
        printf("%d ", n[i] = rand() % 100);

    printf("\n");
    return 0;
}
