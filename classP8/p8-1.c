#include<stdio.h>
#define diff(x,y) ((x)-(y))

int main (){
    int x,y;
    printf("输入两个数：\n");
    scanf("%d%d",&x,&y);
    printf("差为：%d\n",diff(x,y));
    return 0;

}