# include <stdio.h>

int main(void)
{
	int i = 47;   //47��ʾʮ���Ƶ�47
	
	printf("%x\n",i);   //���2f
	printf("%X\n",i);   //��� 2F
	printf("%#X\n",i);  //���0X2F   //�Ƽ�ʹ��
	printf("%#x\n",i);  //���0x2f

	return 0;
}