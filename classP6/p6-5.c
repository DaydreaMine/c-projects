#include <stdio.h>
int sumup(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
     sum+=i;
     }
     return sum;
}
int main(){
     int a;
     printf("输入一个数：\n");scanf("%d",&a);
    printf("到%d之间所有整数的和是： %d\n",a,sumup(a));

}