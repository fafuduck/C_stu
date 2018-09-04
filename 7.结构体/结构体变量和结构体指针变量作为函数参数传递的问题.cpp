/*
   2017年9月2日 11:54:45
   通过函数完成对结构体变量的输入和输出
*/

# include <stdio.h>
# include <string.h>

struct Student
{
	int age;
	char sex;
	char name[100];
}; //分号不能省略

void InputStudent(struct Student * pstu);


void OutputStudent(struct Student ss);

int main(void)
{
	struct Student st;

	InputStudent(&st);   //对结构体变量输入   必须发送st的地址
	printf("%d %c %s\n", st.age, st.sex, st.name);

	OutputStudent(st);  //对结构体变量输出    可以发送st的地址  也可以直接发送st的内容

	return 0;
}

void OutputStudent(struct Student ss)
{
	printf("%d %c %s\n", ss.age, ss.sex, ss.name);
}


void InputStudent(struct Student * pstu)   // pstu 只占4个字节
{
	(*pstu).age = 10;
	strcpy(pstu->name, "张三");
	pstu->sex = 'F';

}



/*
  //本函数无法修改主函数 15行 st的值，所以本函数是错误的

void InputStudent(struct Student stu)
{
	stu.age = 10;
	strcpy(stu.name,"张三");  //不能写成 stu.name = "张三"
	stu.sex = 'F';
}
*/