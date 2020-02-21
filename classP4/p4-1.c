#include <stdio.h>

int main(void)
{
    int no;
    int a;
    do
    { 
    printf("请输入一个整数：");
    scanf("%d", &no);
     if (no == 0)
        puts("该整数为0");
    else if (no > 0)
        puts("该整数为正数");
    else
        puts("该整数为负数");
    printf("是否要继续输入：Y.....0,N.....1\n");
    scanf("%d",&a);
    }while (a==0);
    {
        puts("程序结束");
    }

    return 0;
    
}
