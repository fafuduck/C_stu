# include <stdio.h>
int main(void)
{
	char ch = 'A';   // ��4�У� OK   �ȼ��� char ch; ch = 'A'
//	char ch = "AB"; // error  ��Ϊ"AB"���ַ��������ǲ��ܰ��ַ������������ַ�����
//	char ch = "A";  // error  
//	char ch = 'AB'; //'AB'�Ǵ����
//	char ch = 'B';  //��Ϊch�����Ѿ��ڵ�4���ж����ˣ������ᵼ�±��������ظ�����
    ch = 'C';  // ��ȷ  �൱�ڰ�C��ֵ����ch��������������ȥ����ch��������д��ch = 'D' Ҳ����ȷ��

	printf("%c\n", ch);

	return 0;
}