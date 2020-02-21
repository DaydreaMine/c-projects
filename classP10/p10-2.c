#include <stdio.h>
void decrement_date(int *y, int *m, int *d)
{
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i = (*y % 400 == 0 || *y % 4 == 0 && *y % 100 != 0);
    if (*d - 1 == 0)
    {
        if (--*m == 2)
        {
            *d = 28 + i;
        }
        else if (*m == 0)
        {
            (*y)--;
            *m = 12;
            *d = 31;
        }
        else
            *d = month[*m];
    }
}

void increment_date(int *y, int *m, int *d)
{
    int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    month[2]+=(*y%400==0 || *y%4==0 && *y%100!=0);
    if (++*d > month[*m])
    {
        *d = 1;
        ++(*m);
        if (*m > 12)
        {
            (*y)++;
            *m = 1;
        }
    }
}

int main()
{
    int y, m, d,y2,m2,d2;
    printf("输入年月日：\n");
    scanf("%d", &y);
    scanf("%d", &m);
    scanf("%d", &d);
    y2=y;
    d2 = d;
    m2 = m;
    decrement_date(&y, &m, &d);
    printf("增加一天后：%d  %d  %d\n", y, m, d);
    increment_date(&y2, &m2, &d2);
    printf("减少一天后：%d  %d  %d\n", y2, m2, d2);
    
}
