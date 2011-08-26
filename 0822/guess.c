#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create(int *secretp)
{
    srand(time(NULL));
    *secretp = rand() % 100 + 1;
}

void guess(int secret)
{
    int n, count = 1;

    do{
        printf("enter a number:");
        scanf("%d", &n);
        if(n == secret){
            printf("You get it by %d times!\n", count);
            break;
        }
        if(n > secret)
            printf("Too high!\n");
        else
            printf("Too low!\n");

        count++;
    }while(1);
}

int main(void)
{
    int secret;

    /* call func create */
    create(&secret);
    /* guess */
    guess(secret);
    return 0;
}
