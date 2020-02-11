#include <stdio.h>

int main(void)
{
    int i , n;
    int a=0;
    printf("整数值：");
    scanf("%d", &n);

    for (i = 1; i <= n; i ++) {
        if (n % i == 0){
            
            printf("%d ", i);
            a++;
            
            }
    }printf("有%d个约数\n",a);
    putchar('\n');

    return 0;
}