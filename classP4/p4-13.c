#include<stdio.h>

int main(){
    int n;int sum=0 ;
    printf("输入一个数： ");scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
       sum+=i;
    }
    printf("和为：%d\n",sum);
    return 0;


}