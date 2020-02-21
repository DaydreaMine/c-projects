#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

/*表示学生的结构体*/
typedef struct student{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

/*将x和y指向的学生进行交换*/
void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

/*将学生数组a的前n个元素按身高进行升序排列*/
void sort_by_height(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height)
                swap_Student(&a[j - 1], &a[j]);
        }
    }
}

int main(void)
{   int i;
    Student  a[NUMBER];
    for (i = 0; i < NUMBER; i++)
    scanf("%d",&a[i].height);
    scanf("%s",a[i].name);
    scanf("%f",&a[i].weight);
    scanf("%ld",&a[i].schols);
    sort_by_height(&a[i],NUMBER);

        printf("%-8s  %6d %6.1f %7ld\n",
             a[i].name, a[i].height, a[i].weight, a[i].schols);


    puts("\n按身高排序。");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s  %6d %6.1f %7ld\n",
               a[i].name, a[i].height, a[i].weight, a[i].schols);
    return 0;
}