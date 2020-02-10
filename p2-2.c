#include <stdio.h>

int main(void){
    int a,b;
    puts("输入两个整数：");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n%d*%d=%d\n",a,b,a+b,a,b,a*b);
    return 0;
}