/*
   2017��8��14�� 15:45:31
   һ��Ҫ����10�е�pArr[3] �� 17�� 19�е�a[3]  ��ͬһ������
*/
# include <stdio.h>

void f(int * pArr, int len)
{
	pArr[3] = 88;   //10��
}

int main(void)
{
	int a[6] = {1, 2, 3, 4, 5, 6};
	printf("%d\n", a[3]);   //4   17��

	f(a, 6);
	printf("%d\n", a[3]);   //88   19��
  
	return 0;
}

/*
   ��Vc++6.0������Ľ����:
--------------------
4
88
Press any key to continue
--------------------
*/