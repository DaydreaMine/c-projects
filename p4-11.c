#include <stdio.h>
#include<math.h>
int main(void)
{
    int no;
    int d;
    int i=0;
    int sum=0;
    do {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("请不要输入非正整数！！！");
    } while (no <= 0);

    printf("该整数逆向显示的结果是：");   
    while (no > 0) {
        d=no%10;
        printf("%d", d);
        no /= 10;
        sum=sum+d*pow(10,i);
        i++;
    }
    printf("该数的原值为：%d\n",sum);
   

    return 0;
}