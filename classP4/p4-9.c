#include <stdio.h>

int main(void)
{
    int no;

    printf("请输入一个正数：");
    scanf("%d", &no);
    int a =no/2;
    int b =no%2;
    while (a-->0){
        printf("+-");
    }
    if (b!=0){
        printf("+");
    }
    printf("\n");
    
    
    return 0;
}