# include <stdio.h>

int main(void)
{
	int i=0, s=0;

	do
	{
		if (i%2)
		{
			i++;
			continue;    //������  ����  ע��1 ȥִ��
		}
		i++;
		s+=i;
	}while (i < 5);    //  ע��1

	printf("%d\n", s);

	return 0;
}