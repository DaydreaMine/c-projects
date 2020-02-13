#include <stdio.h>
# define NUMBER 5

int main(){
    int a[NUMBER];
    int i;
     for (i = 0; i < 5; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("{ ");
    for ( int j = 0; j<5; j++)
    {
        printf("第%d个数：%d,  ",j+1,a[j]);
    }
    puts("}  ");
    return 0;

}
