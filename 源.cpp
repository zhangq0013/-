#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void menu()//选择菜单
{
	printf("*********************************\n");
	printf("***1、开始游戏     0、退出游戏***\n");
	printf("*********************************\n");
}
void game()
{
	//生成随机数
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1; //生成1-100之间的随机数；
	//猜数字
	while (1)
	{
		printf("请猜数字:>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	srand( (unsigned int) time(NULL));//用时间戳来设置随机数的生成起点。
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} 
	while (input);
	return 0;
}