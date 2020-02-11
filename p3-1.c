#include <stdio.h>

int main(void){
    int a,b;
    puts("输入两个整数：");scanf("%d\n%d",&a,&b);
    if(a/b){
        printf("b不是a的约数\n");
    }else
    {
        printf("b是a的约数\n");
    }
    return 0;
    
}