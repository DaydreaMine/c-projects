#include <stdio.h>

int main(){
    unsigned a;
    printf("非负整数："); scanf("%u", &a);
    printf("无符号整数位右移后的值等于其乘以2的指数幂后的值：%u\n",a>>1);
    printf("无符号整数位左移后的值等于其乘以2的指数幂后的值：%u\n",a<<1);
    return 0;

}