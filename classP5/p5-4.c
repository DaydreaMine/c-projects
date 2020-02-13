#include <stdio.h>
int main(void)
{
    int i;
    int a[5] = {17, 23, 36};
    int b[5];

    for (i = 0; i < 5; i++)
        b[4-i] = a[i];

    puts("  a   b");
    puts("---------");
    for (int x = 0; x < 5; x++)
        printf("%4d%4d\n", a[x], b[x]);

    return 0;
}