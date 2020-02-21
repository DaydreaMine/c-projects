#include <stdio.h>

int main(void){
    int a,b,c,d;
    puts(" 输入四个数字："); scanf("%d%d%d%d",&a,&b,&c,&c);
    int max=a;
    if (a<b)max=b;
    if (b<c)max=c;
    if (c<d)max=d;
    printf("最大值为：%d\n",max);
    return 0;
}