#include <stdio.h>

int main(void)
{
    float x;
    float sum=0;

    for (x = 0.0; x <= 1.0; x += 0.01){
        sum+=x;
       }
        printf("%f\n",sum);
    
    return 0;
}
