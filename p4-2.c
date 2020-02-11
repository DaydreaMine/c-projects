#include <stdio.h>

int main (){
int a,b;
int sum = 0;
printf("输入两个数字：\n");
scanf("%d%d", &a, &b);
do
{

    sum += a;
    a++;

} while (a < b);
do
{
    sum += b;
    b++;
 
} while (a > b);
printf("两数之间整数和为：%d\n", sum);
puts("程序结束");
}