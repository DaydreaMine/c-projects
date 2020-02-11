#include<stdio.h>
#include<stdlib.h>

int main(int argc,char** argv){
    int n1= atoi(argv[1]);
    int n2= atoi(argv[2]);
    int a;
    a=(n1>=n2)?(n1-n2):(n2-n1);
    if(a>=0&&a<10){
        printf("它们的差值小于10\n");
    }else{
        printf("它们的差值大于于10\n");
    }
    return 0;
    
    }