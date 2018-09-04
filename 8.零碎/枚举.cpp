# include <stdio.h>

// 只定义了一个数据类型，并没有定义变量，该数据类型的名字是 enum WeekDay
enum WeekDay
{
	MonDay, TuseDay, WednesDay, ThursDay, FirDay, SaturDay, SunDay 
  
		// 如果Monday = 2, 后面每个量的输出就会+1
		// 如果没有输入等号， 那第一个的默认值就是0 
};

int main(void)
{
//	int day;  //day定义成int类型不合适
	enum WeekDay Day = WednesDay;

	printf("%d\n", Day);


	return 0;
}