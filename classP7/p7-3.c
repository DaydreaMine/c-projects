#include <stdio.h>

unsigned rrotate(unsigned x,int n){
   return x>>=n;
}
unsigned lrotate(unsigned x,int n){
   return x<<=n;
}

int main(){
    unsigned a,b;
    printf("无符号整数:\n");scanf("%u",&a);
    printf("移动的值:\n");scanf("%u",&b);
    printf("左移%u位后的值：%u\n",b,rrotate(a,b));
    printf("右移%u位后的值：%u\n",b,lrotate(a,b));
    return 0;

}
