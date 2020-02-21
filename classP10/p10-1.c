#include <stdio.h>

void adjust_point(int *n)
{
    if (*n > 100)
    {
        *n = 100;
    }
    else if (*n < 0)
    {
        *n = 0;
    };
    printf("%d\n", *n);
}


int main()
{
    int a;
    printf("输入一个数：\n");
    scanf("%d", &a);
    adjust_point(&a);
    return 0;
}