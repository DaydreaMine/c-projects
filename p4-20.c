#include <stdio.h>

int main(void)
{
    int i , j;

    for (i = 1; i <= 9; i ++) {
        for (j = 1; j <= 9; j++){
            printf("第%d行", j );}
        printf("第%d列",i);
    }
    printf("\n");

    return 0;
}