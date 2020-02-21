#include <stdio.h>

int main(void)
{
    int a,i,x;
    printf("整数值：");
    scanf("%d", &a);
    for (  i = 1; i <= a; i++)
    {
        for ( x = 1; x <=a; x++)
        putchar('*');
        putchar('\n');
        
    }
    return 0;

}