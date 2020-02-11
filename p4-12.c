#include <stdio.h>

int main(void)
{
    int a;
    int i=0;
    printf("输入一个数：\n");
    scanf("%d",&a);
    if (a>0){
        while (a>0) {
            a/=10;
            i++;
        
    }
    printf("它是一个%d位数.\n",i);
    
       
    } printf("请输入正整数");
    return 0;
    
}    