#include <stdio.h>

int main(void){
    int a;
    int b;
    int c;
    puts("请输入三个整数：");
    printf("整数1:\n");scanf("%d",&a);
    puts("整数2:");scanf("%d",&b);
    puts("整数3:");scanf("%d",&c);
    printf("它们的和是：%d\n",a+b+c);
    return 0;
    
}