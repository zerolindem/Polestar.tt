#include <stdio.h>
#include <string.h>
char * fun1(char * p)
{
	printf("%s\n", p);
	return p;
}

char * fun2(char * p)
{
	printf("%s\n", p);
	return p;
}
char * fun3(char * p)
{
	printf("%s\n", p);
	return p;
}
int main()
{
	char * (*pf[3])(char * p);
	pf[0] = fun1; //����ֱ���ú�����
	pf[1] = &fun2; //�����ú���������ȡ��ַ��
	pf[2] = &fun3;
		pf[0]("fun1");
	pf[0]("fun2");
	pf[0]("fun3");
	return 0;
}