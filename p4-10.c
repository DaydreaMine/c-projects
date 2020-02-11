#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正数：\n");
    scanf("%d", &no);
    if(no>0){
        while (no-->0){
        
            printf("*\n");
        }
        return 0;
    }
}