#include <stdio.h>

int main(void)
{
    float x;

    for (x = 0.0; x <= 1.0; x += 0.01)
        printf(" %.2f  ", x);
        printf("\n");
    
    return 0;
}
