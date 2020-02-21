#include <stdio.h>

int main (){
    char sa[]="arrays";
    char *sp="inputs";
    printf("%c\n",sa[2]);
    printf("%x\n",sa+2);
    printf("%s\n",&sa[2]);
    printf("%c\n",*(sa+2));
    printf("%c\n",sp[2]);
     printf("%s\n",sp+2);
      printf("0x%x\n",&sp[2]);
       printf("%c\n",*(sp+2));

}