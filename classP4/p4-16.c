#include <stdio.h>
int main(void)
{
    int n;

    printf("请输入一个正数：");scanf("%d", &n);

    for (int i = 1; i >0&&i<n;i+=2 ){
        printf("%d   ",i);
    }
    printf("\n");
    return 0;

    }