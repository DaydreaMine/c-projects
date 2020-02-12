#include <stdio.h>

int main(void)
{
    int i;
    float x;

    for (i = 0; i <= 100; i++) {
        x = i / 100.0;
        printf("%.2f  ", x);
    }

    return 0;
}