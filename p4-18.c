#include <stdio.h>
int main()
{
    int n;
     printf("请输入一个正整数：");
        scanf("%d", &n);
        int b=n%5;
        for (int a = 0; a <=(n/5-1); a++)
        {
            printf("*****\n");
        }
        
        for (int i = 0; i <=b-1; i++)
        {
            printf("*");
        }
        printf("\n");
        return 0;
        }
        
