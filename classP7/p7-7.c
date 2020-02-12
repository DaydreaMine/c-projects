#include <stdio.h>

int main(){
     float a;
     double b;
     long double c;
     int d;
    printf("输入一个float型数：\n");scanf("%f",&a);
    printf("%f",a);
    printf("输入一个double型数：\n");scanf("%lf",&b);
    printf("%f",b);
    printf("输入一个long double型数：\n");scanf("%Lf",&c);
    printf("%Lf",c);
    printf("输入一个int型数：\n");scanf("%d",&d);
    printf("%d",d);
return 0;

}