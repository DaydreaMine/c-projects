#include <stdio.h>

int min(int a,int b){
    return(a<b)?a:b;
}

int main(){
    int a,b;
    printf("输入两个整数：");scanf("%d%d",&a,&b);
    printf("较小的那个是：%d\n",min(a,b));
}