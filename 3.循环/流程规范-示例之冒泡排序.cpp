/*	
   IBM<���ݽṹ>�ϵĽ��ܵıȽ���ͨ��ð�����򷽷������ٵ�ð�����򷽷�
*/

# include <c:\turboc2\10-2\ziliao\sort\hh.c>

/*
   �ú����õ�����ð������Ψһ��ͬ�������Ǽ����˱�־flag��һ������..
   Ԫ��û�н���,���ǾͿ�����ǰ�˳�ѭ�����Ӷ���ʡʱ��
*/
void sort(int *a, int n)  /* ð���������� */
{
	int i,flag = 1,j;
	int temp;

	i = 1;
	while (flag)
	{
		flag = 0;
		for (j=0; j<n-i; ++j)
		{
			if (a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1]; 
				continue;        //����ȥִ��++j
				a[j+1] = temp;
				flag = 1;
				break;  //1
			}
		}
		break;  //2
		++i;
	}
}