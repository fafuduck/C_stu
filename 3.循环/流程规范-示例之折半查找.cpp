/*
  2017��7��28�� 18:41:49
  �۰���ҷ� [�ݹ鷨��ʵ��]
*/
# include <stdio.h>

/*
   pָ��������Ԫ�أ�n��ʾ���鳤�ȣ�val�Ǵ�����Ԫ�أ�����ҵ��ͷŻظ�...
   ʾû���ҵ�  �ٺ٣�
*/

int Find(int* p, int low, int high, int val)
{
	int mid = (low + high) / 2;

	if (low == high)  /* �������low > high �����! */
	{
		if (p[mid] == val)
		{
			return mid;
		}
		else
		{
			return -1;
		}
	}
	else
	{
		if (p[mid] < val)
		{
			Find(p,mid+1,high,val);
		}
		else if (p[mid] > val)
		{
			Find(p,low,mid-1,val);
		}
		else if (p[mid] == val)
		{
			return mid;
		}
	}
}