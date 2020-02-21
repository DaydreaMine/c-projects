#include <stdio.h>
 
int count(const char *c) {
	int a = 0;
	while (*c++)
		a++;
	return a;
}
 
int main(void)
{
	int i;
	char a[][5] = {"LISP", "C", "Ada"};
	char *p[] = {"PAUL", "X", "MAC"};
	
	for (i = 0; i < count(a); i++)
		printf("a[%d] = \"%s\"\n", i, a[i]);
		
	for (i = 0; i < count(*p); i++)
		printf("p[%d] = \"%s\"\n", i, p[i]);
		
	return 0;
}