/*
   对枚举的应用
*/
# include <stdio.h>

enum weekday
{
	MonDay, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, Sunday
};

void f(enum weekday i)  //本函数的目的只是期望接受0-6之间的数字，将形参i定义为枚举 
{
	switch(i)
	{
	case 0:
		printf("MonDay!\n");
		break;
	case 1:
		printf("TuesDay!\n");
		break;
	case 2:
		printf("WednesDay!\n");
		break;
	case 3:
		printf("ThursDay!\n");
		break;
	case 4:
		printf("FriDay!\n");
		break;
	case 5:
		printf("SaturDay!\n");
		break;
	case 6:
		printf("SunDay!\n");
		break;
	}
}

int main(void)
{
	f(1);

	return 0;
}