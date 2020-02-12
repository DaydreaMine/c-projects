#include <stdio.h>

int main(void)
{
    int i;
    float x;
    float sum=0;

    for (i = 1; i <= 100; i++) {
        x = i / 100.0;
        sum+=x;
    }
    printf("%f\n",sum);

    return 0;
}
