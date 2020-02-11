#include <stdio.h>

int main(void)
{
    int len,i,x;
    printf("让我们画一个金子塔。");
    printf("金字塔有几层： ");scanf("%d", &len);
    for ( i = 1; i <=len;i++ ){
    for ( x = 1; x <=len-i;x++){
        printf(" ");
    }
    for ( x = 1; x<=(i-1)*2+1;x++ ){
        printf("*");
    }
    printf("\n");
    
    }
    return 0;
}    