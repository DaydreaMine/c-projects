#include <stdio.h>

int main(void){
    double x;
    puts("请输入一个实数");
    scanf("%lf",&x);
    printf("你输入的是%.07f\n",x);
}