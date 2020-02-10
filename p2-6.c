#include <stdio.h>

int main()
{
    int a;
   puts("请输入您的身高：");scanf("%d",&a);
   printf("您的体重是：%.1f\n",(float)(a-100)*0.9);
    return 0;
}