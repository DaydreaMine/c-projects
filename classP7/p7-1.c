#include <stdio.h>

int main(void)
{
    int n;
    printf("sizeof 1    =%u\n",(unsigned)sizeof(1));
    printf("sizeof +1    =%u\n",(unsigned)sizeof(+1));
    printf("sizeof -1    =%u\n",(unsigned)sizeof(-1));
    printf("sizeof(unsigned)-1    =%u\n",(unsigned)sizeof(unsigned)-1);
    printf("sizeof(double)-1     =%u\n",(unsigned)sizeof(double)-1);          //元素个数减一
    printf("sizeof(double)-1     =%u\n",(unsigned)sizeof((double)-1));        //完整的double元素
    printf("sizeof n+2    =%u\n",(unsigned)sizeof n+2);
     printf("sizeof n+2    =%u\n",(unsigned)sizeof (n+2));
      printf("sizeof n+2    =%u\n",(unsigned)sizeof (n+2.0));

    


  
}