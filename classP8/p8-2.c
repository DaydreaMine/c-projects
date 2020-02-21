#include<stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))

int main(){
    int a,b,c,d;
    printf("输入4个数");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d\n",max(max(a, b), max(c, d)));
    printf("%d\n",max(max(max(a, b), c), d));
    return 0;
}