#include <stdio.h>

int main(void){
    int a,b,c;
    puts(" 输入三个数字：");scanf("%d%d%d",&a,&b,&c);
    if (a==b&&b==c)puts("三个数相同\n");
    else if(a==b||b==c||a==c)puts("两个值相同\n");
    else puts("三个值均不相同");
    return 0;
    
}