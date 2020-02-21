#include <stdio.h>
struct xyz{
    int x;
    long y;
    double z;
};

int main (){
    struct xyz a;
    scanf("%d",&a.x);
    scanf("%ld",&a.y);
    scanf("%lf",&a.z);
    printf("%d\n",a.x);
    printf("%ld\n",a.y);
    printf("%f\n",a.z);
    return 0;
  

}