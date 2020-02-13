#include <stdio.h>
#define NUMBER 7
int min_of(int v[], int n)
{
    int i;
    int min = v[0];

    for (i = 1; i < n; i++)
        if (v[i] < min)
            min = v[i];
    return min;
}

int main(void)
{
    int i;
    int a[NUMBER];
    int min;

    printf("请输入%d个整数。\n",NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("第[%d]个数：", i + 1); scanf("%d", &a[i]);
    }

    min = min_of( a,NUMBER );

    printf("最小数为：%d\n", min);
    return 0;
}