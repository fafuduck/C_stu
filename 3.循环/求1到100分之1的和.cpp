# include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i=1; i<=100; ++i)
	{
		sum = sum + 1 / (float)i;    //是ok的
		//  sum = sum + (float)(1/i); 这样写是不对的
		//  更简单的写法 : sum = sum + 1.0/i;
	}
	printf("sum = %f\n", sum);   //float必须用%f来输出

	return 0;
}