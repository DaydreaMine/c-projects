#include <stdio.h>

int main(void){
    int a,b;
    printf("请输入2个整数：\n");scanf("%d\n%d",&a,&b);
    printf("a是b的：%lf%%\n",(double)a*100/b);
    return 0;

}