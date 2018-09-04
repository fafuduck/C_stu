# include <stdio.h>

int main(void)
{
	int i;
	int sum =0;

	i = 1;
	while (i<101)
	{
		sum = sum +i;
		++i;
	}


/*
	for (i=1; i<101; ++i)
	{
		sum = sum +i;
	}
*/
	printf("sum = %d\n", sum);

	return 0;
}