#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void menu()//ѡ��˵�
{
	printf("*********************************\n");
	printf("***1����ʼ��Ϸ     0���˳���Ϸ***\n");
	printf("*********************************\n");
}
void game()
{
	//���������
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1; //����1-100֮����������
	//������
	while (1)
	{
		printf("�������:>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	srand( (unsigned int) time(NULL));//��ʱ����������������������㡣
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
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} 
	while (input);
	return 0;
}