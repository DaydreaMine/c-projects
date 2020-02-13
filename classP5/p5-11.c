#include <stdio.h>
#include<stdlib.h>
#define NUM1 6
#define NUM2 2

int main(){
    int stu[NUM1][NUM2]={0};
    int i,j;
    printf("输入成绩：");
    for ( i = 0; i < NUM1; i++)
    {
        printf("学号：%d\n",i+1);
        for(j=0;j<NUM2;j++){
        scanf("%d",&stu[i][j]);

        }
    }
    
    
    for ( i = 0; i < NUM1; i++)
    { int sum1=0;int avg1=0;
      for ( j = 0; j < NUM2; j++)
      {
          sum1+=stu[i][j];
      }
      printf("序号%d的2门课程总成绩为：%d \n",i+1,sum1);
      avg1=sum1/NUM2;
      printf("序号%d平均值为：%d \n",i+1,avg1);
    }

    for ( j = 0; j < NUM2; j++)
    { int sum2=0;int avg2=0;
      for ( i = 0; i < NUM1; i++)
      {
          sum2+=stu[i][j];
      }
      printf("第%d门成绩为：%d \n",j+1,sum2);
      avg2=sum2/NUM1;
      printf("第%d门平均值为：%d \n",j+1,avg2);
    }
    return 0;
    


}
