#include <stdio.h>
#include<stdlib.h>
#define NUM1 3
#define NUM2 3
#define NUM3 4

int main(){
    long int test1[NUM1][NUM3]={0};
    long int test2[NUM3][NUM2]={0};
    long int test3[NUM1][NUM2]={0};
    int i,j,k;
    printf("第一个矩阵\n");
    for ( i = 0; i < NUM1; i++)
    {
      printf("第%d行：\n",i+1); 
      printf("输入%d个数 \n",NUM3);
      for ( j= 0; j < NUM3; j++)
      {
         scanf("%ld",&test1[i][j]);
      }
    }

    //
     printf("第二个矩阵\n" );
    for ( i = 0; i < NUM3; i++)
    {
      printf("第%d行：\n",i+1); 
      printf("输入%d个数 \n",NUM2);
      for ( j = 0; j < NUM2; j++)
      {
          scanf("%ld",&test2[i][j]);
      } 
    }

    //
    printf("他们的乘积是：\n");
    for (i = 0; i < NUM1; i++){
        for ( j = 0; j < NUM2; j++)
        {
            for (k=0;k<NUM3;k++){
                test3[i][j]+=test2[i][k]*test1[k][j];
            }
        }
        
    }
    
    for ( i = 0; i < NUM1; i++)
    {
        for(j=0;j<NUM2;j++){
            printf("%3ld\n",test3[i][j]);
        }
         printf("\n");
         return 0;
    }
   
    
    


    
}