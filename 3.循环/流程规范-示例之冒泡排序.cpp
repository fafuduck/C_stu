/*	
   IBM<数据结构>上的介绍的比较普通的冒泡排序方法更快速的冒泡排序方法
*/

# include <c:\turboc2\10-2\ziliao\sort\hh.c>

/*
   该函数用的仍是冒泡排序，唯一不同的是我们加入了标志flag，一旦发现..
   元素没有交换,我们就可以提前退出循环，从而节省时间
*/
void sort(int *a, int n)  /* 冒泡升序排序 */
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
				continue;        //会跳去执行++j
				a[j+1] = temp;
				flag = 1;
				break;  //1
			}
		}
		break;  //2
		++i;
	}
}