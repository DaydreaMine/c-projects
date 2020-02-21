#include <stdio.h>
#include<stdlib.h>

unsigned set_n(unsigned x,int pos ,int n){
    for (int i=0;i<n;i++){
        x=set(x,pos+i);
    }
    return x;
}

