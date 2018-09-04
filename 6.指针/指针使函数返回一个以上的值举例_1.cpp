# include <stdio.h>

int f(int i,int j)
{
	return 100.33;
}

void g(int * p, int * q)
{
	*p = 1;
	*q = 2;
}

int main(void)
{
	int a = 3, b = 5;


	g(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", a);
	return 0;
}