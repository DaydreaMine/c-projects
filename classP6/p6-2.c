#include <stdio.h>

int min(int a,int b,int c){
    int min1=a;
    if(b<min1){
        min1=b;
    }
    if (c<min1)
    {
        min1=c;
    }
    return min1;
    

}

int main(){
    int a,b,c;
    printf("输入三个整数：\n");scanf("%d%d%d",&a,&b,&c);
    printf("较小的那个是：%d\n",min(a,b,c));
}