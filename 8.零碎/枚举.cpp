# include <stdio.h>

// ֻ������һ���������ͣ���û�ж�����������������͵������� enum WeekDay
enum WeekDay
{
	MonDay, TuseDay, WednesDay, ThursDay, FirDay, SaturDay, SunDay 
  
		// ���Monday = 2, ����ÿ����������ͻ�+1
		// ���û������Ⱥţ� �ǵ�һ����Ĭ��ֵ����0 
};

int main(void)
{
//	int day;  //day�����int���Ͳ�����
	enum WeekDay Day = WednesDay;

	printf("%d\n", Day);


	return 0;
}