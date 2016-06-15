#include "myH.h"

void main()
{
	char ch[10];
	printf("\n\n\t\t****************欢迎进入记忆训练游戏***************\n");
	while(1)
	{
		printf("\n\n\t\t\t\t请选择你要进入的模式\n");
		printf("\n\n\t\t\t\t1   数字模式");
		printf("\n\n\t\t\t\t2   全键盘模式");
		printf("\n\n\t\t\t\t3   大写字母模式");
		printf("\n\n\t\t\t\t4   小写字母模式\n\t\t\t\t");
		ch[10] = scanf("%s",&ch);
		if(strcmp(ch,"1")==0)
		{
			system("cls");
			printf("\n\n\t\t****************欢迎进入数字模式***************\n");
			number();
		}
		else if(strcmp(ch,"2")==0)
		{
			system("cls");
			printf("\n\n\t\t****************欢迎进入全键盘模式***************\n");
			allKeys();
		}
		else if(strcmp(ch,"3")==0)
		{
			system("cls");
			printf("\n\n\t\t****************欢迎进入大写字母模式***************\n");
			capital();
		}
		else if(strcmp(ch,"4")==0)
		{
			system("cls");
			printf("\n\n\t\t****************欢迎进入小写字母模式***************\n");
			lowercase();
		}
		else
		{
			system("cls");
			printf("\n\n\t\t\t\t输入错误！请重新输入");
		}
	}	
}
