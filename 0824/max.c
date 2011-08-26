#include <stdio.h>
#include <string.h>

typedef int (*cmp_t)(const void *, const void *);

typedef struct{
    const char *name;
    int score;
}student_t;

int cmp_std(const void *a, const void *b)
{
    return ((student_t *)a)->score - ((student_t *)b)->score;
}

int cmp_int(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int cmp_str(const void *a, const void *b)
{
    return strcmp(*(char **)a, *(char **)b);
}

void *max(void *base, int nmemb, int size, cmp_t cmp)
{
    char *start = base, *maxp = base;
    int i;

    for(i = 1; i < nmemb; i++){
        if(cmp(maxp, start + i * size) < 0)
            maxp = start + i * size;
    }
    return (void *)maxp;
}

int main(void)
{
    student_t list[4] = {{"Tom", 68}, {"Jerry", 72}, 
                         {"Moby", 60}, {"Kirby", 89}};

    int num[10] = {2, 36, 78, 25, 114, 3, 9, 26, 46, 10};
    int *pint = max(num, 10, 4, cmp_int);

    const char *msg[] = {"hello", "aaaaaaxyz", "world", "abcd"};
    char **pstr = max(msg, 4, 4, cmp_str);

    student_t *pmax = max(list, 4, 8, cmp_std);
    printf("max:%s, %d\n", pmax->name, pmax->score);
    printf("max_int: %d\n", *pint);
    printf("max_str: %s\n", *pstr);

    return 0;
}
