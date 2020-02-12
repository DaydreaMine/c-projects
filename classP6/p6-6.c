#include <stdio.h>

void alert(int n) { 
   while(n-->0){
    printf("\a");
    }
}

int main(void){
    int n;
    printf("输入一个数：\n");scanf("%d",&n);
    alert(n);
    return 0;
}