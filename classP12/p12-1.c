#include <stdio.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];   /*姓名*/
    int height;            /*身高*/
    float weight;          /*体重*/
    long schols;           /*奖学金*/
};

int main(void)
{
    struct student takao = {"Takao", 173, 86.2};

    printf("姓名 = 0*x%x\n", &takao.name);
    printf("身高 = 0*x%x\n", &takao.height);
    printf("体重 = 0*x%x\n", &takao.weight);
    printf("奖学金 = 0*x%x\n", &takao.schols);

    return 0;
    }