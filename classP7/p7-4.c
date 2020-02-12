#include <stdio.h>
#include <math.h>
unsigned set(unsigned x,int pos){
    unsigned a=x>>(pos-1);
    if (a&1u){
        return x;
    }else{
    return x+pow(2,pos-1);}
}

unsigned reset(unsigned x,int pos){
    unsigned a=x>>(pos-1);
    if (a&1u)
    {
       return x-pow(2,pos-1);
    }else{
    return x;}
    }

unsigned inverse(unsigned x,int pos){
    unsigned a=x>>(pos-1);
    if (a&1u)
    {
        return x-pow(2,pos-1);
    }else{
    return x+pow(2,pos-1);}
    }

int main(){
    unsigned d;
    int e;
    printf("输入一个数：\n");scanf("%u",&d);
    printf("第几位：\n");scanf("%u",&e);
    printf("无符号整数%u的第%u位设为1后的值：%u\n",d,e,set(d,e));
    printf("无符号整数%u的第%u位设为0后的值：%u\n",d,e,reset(d,e));
    printf("无符号整数%u的第%u位取反后的值：%u\n",d,e,inverse(d,e));
return 0;

}
