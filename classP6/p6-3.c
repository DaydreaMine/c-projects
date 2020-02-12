#include <stdio.h>

int cube (int x){
    return x*x*x;
}

int main(){
    int a;
    printf("输入一个数：\n");scanf("%d",&a);
    printf("立方是： %d\n",cube(a));
    return 0;
}