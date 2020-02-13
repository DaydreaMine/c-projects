#include <stdio.h>
#define NUMBER 7
void rev_intary(int v[], int n)
{
    int i, j;
    for (i = 0; i < n / 2; n++)
    {
        j = v[i];
        v[i] = v[n - i];
        v[n - i] = j;
    }printf("%d",v[i]);
}

    int main(){
        int a;
        int v[NUMBER];
        printf("输入%d个整数： \n", NUMBER);
        for (a = 0; a < NUMBER; a++)
        {
            printf("第[%d]个数：", a + 1);
            scanf("%d", &v[a]);
        }
        rev_intary(v,NUMBER);
       
        return 0;
    }

