#include <stdio.h>
#define number ;
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
    int n;
    int min;

    printf("请输入%d个整数。\n", );
    for (i = 0; i < n; i++)
    {
        printf("第[%d]个数：", i + 1); scanf("%d", &n);
    }

    min = min_of(n, );

    printf("最小数为：%d\n", min);
    return 0;
}