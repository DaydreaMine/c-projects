#include <stdio.h>

int main(){
    puts("开始数值（cm）：155\n");
    puts("结束数值（cm）：190\n");
    puts("间隔数值（cm）：5");
    for (int i = 155; i <= 190; )
    {
        double weight=(i-80)*0.7;
        printf("%d cm     %.2f kg\n",i,weight);
         i=i+5;
    }
    return 0;
    
    }