#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("请输入两个整数：");
    printf("整数1："); scanf("%d", &n1);
    printf("整数2："); scanf("%d", &n2);
    int x=n1-n2;
    if(x<0)x=-x;

    printf("它们的差是%d。\n",x );

    return 0;
}