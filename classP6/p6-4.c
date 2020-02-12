#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int pow4 (int x){
    return sqr(x)*sqr(x);
}

int main(){
    int a;
     printf("输入一个数：\n");scanf("%d",&a);
    printf("四次幂是： %d\n",pow4(a));
}