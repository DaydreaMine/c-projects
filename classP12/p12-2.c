#include <stdio.h>

#define NAME_LEN 64

typedef struct student {        /*student可以省略*/
    char name[NAME_LEN];   /*姓名*/
    int height;            /*身高*/
    float weight;          /*体重*/
    long schols;           /*奖学金*/
} Student;

/*将std指向的学生的身高变为180cm，体重变为80kg*/
void hiriko(Student *std)
{
    if (std->height < 180) std->height = 180;
    if (std->weight > 80) std->weight = 80;
}


int main(void)
{
    struct student sanaka;
    scanf("%d",&sanaka.height);
    scanf("%s",&sanaka.name);
    scanf("%f",&sanaka.weight);
    scanf("%ld",&sanaka.schols);

    hiriko(&sanaka);

    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

    return 0;

}