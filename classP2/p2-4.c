#include <stdio.h>

int main(void){
    short a;
    long b;
    int d;
    double c;
    float f;
    printf("请输入short型数a：\n");scanf("%hd",&a);
    printf("请输入long型数b：\n");scanf("%ld",&b);
    printf("请输入int型数d：\n");scanf("%d",&d);
    printf("请输入double型数c：\n");scanf("%lf",&c);
    printf("请输入float型数d：\n");scanf("%f",&f);
    printf("a+c=%f\n",a+c);
    printf("(b-a)/2=%lf\n",(double)(b-a)/2);
    printf("b/a=%ld\n",b/a);
    printf("c*d=%f\n",c*d);
    printf("f/d=%f\n",f/d);
    printf("a-f=%f\n",a-f);
    return 0;

}