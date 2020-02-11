#include <stdio.h>

int main(void)
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    i = 0;
    if(no>0){
    while (i+2 <= no){
        printf("%d ", i+=2);
    }
    printf("\n");
    }

    return 0;
}
