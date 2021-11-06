#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//20211年11月05日
//#define max 100
//#define可以定义宏；也可以标识符常量；

//（static修饰局部变量，一个循环过后不会初始化)
// static修饰全局变量,改变了变量的作用域，让静态全局变量只能在自己所在的源文件内部使用；
//void test()//定义一个test()函数：
//{
//	int a = 1;
//	a++;
//	printf("a = %d\n", a);
//}
//int main()
//{
//	//extern -申明外部符号及函数
//	extern int g_val; //定义了一个全局变量int g_val
//	printf("g_val = %d\n", g_val);
//	return 0;
//
//}
////void test()//定义一个test()函数：
//{
//	static int a = 1;//a 属于一个静态的局部变量；
//	a++;
//	printf("a = %d\n", a);
//
//}
//int main()
//{
//	int i = 0; 
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
