#include <stdio.h>

int main(void)
{
    int i, j, k;
    /*int tensu1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int tensu2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};*/
    int tensu3[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
                           {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
    int sum=0;

    /*求两次考试的分数之和*/
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum += +tensu3[i][j][k];
            }
        }
       
    }
    printf("总分为：%4d\n",sum);
     

    /*显示第一次考试的分数*/
    puts("第考试的分数");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("第%d次：%4d", i+1,tensu3[i][j][k]);
                putchar('\n');
            }
        }
    }

   
}