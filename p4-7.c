#include <stdio.h>

int main(void)
{
    int i, no,sum;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 0;
    if(no>0){
    while (i < no){
        i++;
        sum=i*2;
        printf("%d ", sum);
        
    }
    printf("\n");
    }

    return 0;
}