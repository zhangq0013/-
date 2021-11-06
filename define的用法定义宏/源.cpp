#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Max(int x , int y)
{
	if (x > y)
		return x;
	else
		return y ;
}
#define MAX(x, y) (x>y?x:y)
int main()
{
	int a = 10;
	int b = 20;
	//º¯Êý
	int max = Max(a, b);
	printf("max = %d\n", max); 
	//ºê
	max = MAX(a, b);
	printf("max = %d\n", max);
	return 0;
}