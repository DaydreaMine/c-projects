#include <stdio.h>

int main(void)
{
    int no;
    printf("请输入一个整数：");
    scanf("%d", &no);
    int a =no%2;
    switch (a)
    {
    case 1:puts("此数为奇数"); 
        break;
    case 0:puts("此数为偶数"); 
        break;
    default:
        break;
    }
}