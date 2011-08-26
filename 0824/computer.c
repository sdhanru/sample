#include <stdio.h>
typedef int (*funcp_t)(int, int);
typedef struct{
    char op;
    funcp_t p;
}cmd_t;
int add(int a, int b){ return a + b;}
int sub(int a, int b){ return a - b;}
int mul(int a, int b){ return a * b;}
int div(int a, int b){ return a / b;}
int main(void)
{
    cmd_t cmd[4] = {{'+', add}, {'-', sub}, 
                    {'*', mul}, {'/', div}};
    char op;
    int a, b, i;

    do{
        printf("enter op:");
        scanf("%c", &op);
        if(op == '#')
            break;
        printf("enter a, b:");
        scanf("%d %d", &a, &b);
        getchar();
        for(i = 0; i < 4; i++){
            if(op == cmd[i].op)
                printf("result:%d\n", (cmd[i].p)(a, b));
        }
    }while(1);

    return 0;
}
