#include <stdio.h>

int main(void){
    int a,b;
    printf("输入两个整数\n");
    scanf("%d%d",&a,&b);
    printf("a是b的%d%%\n",(a*100)/b);
    return 0;
}