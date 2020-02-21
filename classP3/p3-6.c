#include <stdio.h>

int main(void){
    int a,b,c;
    puts("输入三个数：");scanf("%d%d%d",&a,&b,&c);
    int min=a;
    if(a>b) min=b;
    if(b>c) min=c;
    printf("最小值为：%d\n",min);
    return 0;
}