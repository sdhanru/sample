#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[12];
    int score;
    char *p;
}std_t;


int main(void)
{
    std_t std1, std2;
    std_t *p, *q;

    p = &std1;
    p->id = 12;
    strcpy(p->name, "aaaa");

    q = &std2;
    q->id = 15;
    
    return 0;
}
