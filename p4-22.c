#include <stdio.h>

int main(void)
{
    int i , j;
    int a,b;

    puts("让我们来画一个长方形。");
    printf("变长1："); scanf("%d", &a);
    printf("变长2："); scanf("%d", &b);
    int max=(a>b)?a:b;
    int min=(a<b)?a:b;

    for (i = 1; i <= min; i ++) {
        for (j = 1; j <=max; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}