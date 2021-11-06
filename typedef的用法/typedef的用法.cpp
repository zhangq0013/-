#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//signed int等价于int
	typedef unsigned int u_int;//typedef重新定义后面的变量
	unsigned int num = 25;//unsigned int无符号整型
	u_int num2 = 20;
	printf("%d\n", num2);
	return 0;
}