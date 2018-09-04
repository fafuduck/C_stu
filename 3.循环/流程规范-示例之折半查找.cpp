/*
  2017年7月28日 18:41:49
  折半查找法 [递归法来实现]
*/
# include <stdio.h>

/*
   p指向数组首元素，n表示数组长度，val是待查找元素，如果找到就放回该...
   示没有找到  嘿嘿！
*/

int Find(int* p, int low, int high, int val)
{
	int mid = (low + high) / 2;

	if (low == high)  /* 不会存在low > high 的情况! */
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