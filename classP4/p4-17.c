#include <stdio.h>
int main()
{
    int n;

    printf("请输入一个正数：");scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d的二次方是%d\n",i,i*i);
    }
return 0;
    

}