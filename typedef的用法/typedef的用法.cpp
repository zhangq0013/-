#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//signed int�ȼ���int
	typedef unsigned int u_int;//typedef���¶������ı���
	unsigned int num = 25;//unsigned int�޷�������
	u_int num2 = 20;
	printf("%d\n", num2);
	return 0;
}