#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("输入一个实数：  ");scanf("%d",&a);
    double b=sqrt( a);
    printf("面积为该实数的正方形的边长：%f\n",b);
    return 0;
}