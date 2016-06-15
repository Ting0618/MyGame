#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

#define random(x)(rand()%x)
int s1 = 1,score=0,floor=1,wrong=0;

//产生随机数字

void number()
{
	int i = 0,k=0;
	int num;//存放产生的随机数
	clock_t start,end;
	char ch[10]={' '};		//存放用户输入的数字（用户输入的可能是别的错的东西，所以用字符串）
	char ch1[10];
	char change[10]=" ";	//存放转换为字符类型的随机数
	srand((int)time(0));	//用当前时间做种子
	start=clock();
	printf("\n\n\t\t\t*************第 %d 关************\n\n",floor);
	num = rand()%((s1*10)-s1) + s1;		//产生随机数
	printf("\t\t\t\t\t%d\n",num);   //输出随机数
	Sleep(1500);			//停顿这么多毫秒
	system("cls");
	printf("\n\n\n\t\t\t     请输入您刚才看到的数字\n\t\t\t\t\t");
	ch[10] = scanf("%s",&ch);		//用户输入看到的五个数（一个一个输入，一个一个做比较）
	itoa(num,change,10);			//将某个随机数变成字符串类型（用于和用户输入的做比较）
	if(strcmp(ch,change)==0)		//比较成功
	{
		if(k==0)
		{
			system("cls");			//清屏
			printf("\n\n\n\t\t\t   恭喜你！闯关成功！进入下一关\n");
			score=score+floor*10;
			s1 = s1*10;
			floor++;
			number();
		}
	}
	else			//用户输入得不对
	{
		printf("\t\t\t\t很遗憾，输入错误!\n\n");
		printf("\t\t\t\t正确的数字为：%d\n",num);
		wrong++;
		Sleep(2500);
		system("cls");
		printf("\n\n\n\t\t\t\t请选择您要进行的操作：\n\n",score);
		
		while(1)
		{
			printf("\t\t\t\t1 继续本关卡\n");
			printf("\t\t\t\t2 重头再玩\n");
			printf("\t\t\t\t3 退出游戏\n");
			ch1[10] = scanf("%s",&ch1);
			if(strcmp(ch1,"1")==0)		//如果选择1的话
			{
				wrong++;
				system("cls");			//清屏
				number();
			}
			else if(strcmp(ch1,"2")==0)		//如果选择2的话
			{
				s1=1;
				floor=1;
				score = 0;
				system("cls");			//清屏
				number();
			}
			else if(strcmp(ch1,"3")==0)		//如果选择3的话
			{
				system("cls");	//清屏
				end=clock();
				printf("\n\n\n\t\t\t\t您已成功退出游戏\n");
				printf("\n\t\t\t\t你已经玩了%d关\n",floor);
				printf("\t\t\t\t您的分数为：%d\n",score);
				printf("\t\t\t\t共用时间%d秒\n",(end-start)/1000);
				printf("\t\t\t\t测试次数：%d次\n",wrong);
				i =(floor-wrong)*100/floor;
				printf("\t\t\t\t正确率：%d%%\n",i);
				exit(0);
			}
			else
			{
				system("cls");			//清屏
				printf("\n\n\n\t\t\t\t输入错误，请重新输入！\n");
			}
		}	
	}
	
}


//全键盘
void allKeys()
{
	int k=0,j=0,i=0;
	int num;	
	clock_t start,end;
	unsigned char ch[100];
	char putIn[100];
	char ch1[10];
	srand((int)time(0));
	start=clock();
	printf("\n\n\t\t\t*************第 %d 关************\n\n",floor);
	for(j=0;j<floor;j++)
	{
		ch[j] = rand()%94 + 33;		//产生随机数
		printf("\t\t\t\t\t%c \n",ch[j]);   //输出随机数
	}
	Sleep(1500);
	system("cls");			//清屏
	printf("\n\n\n\t请输入您刚才看到的字符,每输入一个字符请按enter键，谢谢合作！\n");
	for(j=0;j<floor;j++)
	{
		printf("\t\t\t\t\t");
		putIn[10] = scanf("\t\t\t\t%s",&putIn);		//用户输入看到的五个字符（一个一个输入，一个一个做比较
		if(ch[j]==putIn[0])		//比较成功
		{
			k++;
			if(k==floor)
			{
				system("cls");			//清屏
				printf("\n\n\n\t\t\t恭喜你！闯关成功！进入下一关\n");
				score=score+floor*10;
				floor++;
				allKeys();
			}
		}
		else			//用户输入得不对
		{
			printf("\t\t\t很遗憾，输入错误!\n\n");
			printf("\t\t\t正确的组合为：");
			for(j=0;j<floor;j++)
			{
				printf("%c  ",ch[j]);
			}
			wrong++;
			Sleep(3500);
			system("cls");
			printf("\n\n\n\t\t\t请选择您要进行的操作：\n\n",score);
			while(1)
			{
				printf("\t\t\t\t1 继续本关卡\n");
				printf("\t\t\t\t2 重头再玩\n");
				printf("\t\t\t\t3 退出游戏\n\t\t\t\t");
				ch1[10] = scanf("%s",&ch1);
				if(strcmp(ch1,"1")==0)		//如果选择1的话
				{
					system("cls");			//清屏
					allKeys();
				}
				else if(strcmp(ch1,"2")==0)
				{
					s1=1;
					floor=1;
					score = 0;
					system("cls");			//清屏
					allKeys();
				}
				else if(strcmp(ch1,"3")==0)		//如果选择3的话
				{
					system("cls");//清屏
					end=clock();
					printf("\n\n\n\t\t\t\t您已成功退出游戏\n");
					printf("\n\t\t\t\t你已经玩了%d关\n",floor);
					printf("\t\t\t\t您的分数为：%d\n",score);
					printf("\t\t\t\t共用时间%d秒\n\n",(end-start)/1000);
					printf("\t\t\t\t测试次数：%d次\n",wrong);
					i = (floor-wrong)*100/floor;
					printf("\t\t\t\t当前正确率：%d%%\n",i);
					exit(0);
				}
				else
				{
					system("cls");			//清屏
					printf("\n\n\n\t\t\t\t输入错误，请重新输入！\n");
				}
			}	
		}	
	}	
}

//生成大写字母

void capital()
{
	int i = 0,k=0,j;
	unsigned char ch[100];
	clock_t start,end;
	char putIn[100];
	char ch1[10];
	srand((int)time(0));
	start=clock();
	printf("\n\n\t\t\t*************第 %d 关************\n\n",floor);
	for(j=0;j<floor;j++)
	{
		ch[j] = rand()%26 + 65;		//产生随机数
		printf("\t\t\t\t\t%c \n",ch[j]);   //输出随机数
	}
	Sleep(1500);
	system("cls");			//清屏
	printf("\n\n\t请输入您刚才看到的字符,每输入一个字符请按enter键，谢谢合作！\n");
	for(j=0;j<floor;j++)
	{
		printf("\t\t\t\t\t");
		putIn[10] = scanf("\t\t\t\t%s",&putIn);		//用户输入看到的五个字符（一个一个输入，一个一个做比较
		if(ch[j]==putIn[0])		//比较成功
		{
			k++;

			if(k==floor)
			{
				system("cls");			//清屏
				printf("\n\n\n\t\t\t恭喜你！闯关成功！进入下一关\n");
		
				score=score+floor*10;
				floor++;
				capital();
			}
		}
		else			//用户输入得不对
		{
			printf("\t\t\t很遗憾，输入错误!\n\n");
			wrong++;
			printf("\t\t\t正确的组合为：");
			for(i=0;i<floor;i++)
			{
				printf("%c  ",ch[i]);
			}
			Sleep(2500);
			system("cls");
			printf("\n\n\n\t\t\t请选择您要进行的操作：\n\n",score);
			while(1)
			{
				printf("\t\t\t\t1 继续本关卡\n");
				printf("\t\t\t\t2 重头再玩\n");
				printf("\t\t\t\t3 退出游戏\n\t\t\t\t");
				ch1[10] = scanf("%s",&ch1);
				if(strcmp(ch1,"1")==0)
				{
					system("cls");			//清屏
					allKeys();
				}
				else if(strcmp(ch1,"2")==0)
				{
					s1=1;
					floor=1;
					score = 0;
					system("cls");			//清屏
					allKeys();
				}
				else if(strcmp(ch1,"3")==0)		//如果选择3的话
				{
					system("cls");//清屏
					end=clock();
					printf("\n\n\n\t\t\t\t您已成功退出游戏\n");
					printf("\n\t\t\t\t你已经玩了%d关\n",floor);
					printf("\t\t\t\t您的得分：%d\n",score);
					printf("\t\t\t\t共用时间%d秒\n",(end-start)/1000);
					printf("\t\t\t\t测试次数：%d次\n",wrong);
					i = (floor-wrong)*100/floor;
					printf("\t\t\t\t正确率：%d%%\n",i);
					exit(0);
				}
				else
				{
					system("cls");			//清屏
					printf("\n\n\n\t\t\t\t输入错误，请重新输入！\n");
				}
			}	
		}	
	}	
}


//生成小写字母
void lowercase()
{
	int i = 0,k=0,j;
	unsigned char ch[100];
	clock_t start,end;
	char putIn[100];
	char ch1[10];
	srand((int)time(0));
	start=clock();
	printf("\n\n\t\t\t*************第 %d 关************\n\n",floor);
	for(j=0;j<floor;j++)
	{
		ch[j] = rand()%26 + 97;		//产生随机数
		printf("\t\t\t\t\t%c\n ",ch[j]);   //输出随机数
	}
	Sleep(1500);
	system("cls");			//清屏
	printf("\n\n\t请输入您刚才看到的字符,每输入一个字符请按enter键，谢谢合作！\n");
	for(j=0;j<floor;j++)
	{
		printf("\t\t\t\t\t");
		putIn[10] = scanf("\t\t\t\t%s",&putIn);		//用户输入看到的五个字符（一个一个输入，一个一个做比较
		if(ch[j]==putIn[0])		//比较成功
		{
			k++;
			
			if(k==floor)
			{
				system("cls");			//清屏
				printf("\n\n\n\t\t\t恭喜你！闯关成功！进入下一关\n");
				score=score+floor*10;
				floor++;
				lowercase();
			}
		}
		else			//用户输入得不对
		{
			printf("\t\t\t很遗憾，输入错误!\n\n");
			printf("\t\t\t正确的组合为：");
			for(i=0;i<floor;i++)
			{
				printf("%c ",ch[i]);
			}
			wrong++;
			Sleep(2500);
			system("cls");
			printf("\n\n\n\t\t\t请选择您要进行的操作：\n\n",score);
			while(1)
			{
				printf("\t\t\t\t1 继续本关卡\n");
				printf("\t\t\t\t2 重头再玩\n");
				printf("\t\t\t\t3 退出游戏\n\t\t\t\t");
				ch1[10] = scanf("%s",&ch1);
				if(strcmp(ch1,"1")==0)		//如果选择1的话
				{
					system("cls");			//清屏
					allKeys();
				}
				else if(strcmp(ch1,"2")==0)
				{
					s1=1;
					floor=1;
					score = 0;
					system("cls");			//清屏
					allKeys();
				}
				else if(strcmp(ch1,"3")==0)		//如果选择3的话
				{
					system("cls");			//清屏
					end=clock();
					printf("\n\n\n\t\t\t\t您已成功退出游戏\n");
					printf("\n\t\t\t\t你已经玩了%d关\n",floor);
					printf("\t\t\t\t您的得分：%d\n",score);
					printf("\t\t\t\t共用时间%d秒\n",(end-start)/1000);
					printf("\t\t\t\t测试次数：%d次\n",wrong);
					i = (floor-wrong)*100/floor;
					printf("\t\t\t\t正确率：%d%%\n",i);
					exit(0);
				}
				else
				{
					system("cls");			//清屏					
					printf("\n\n\n\t\t\t\t输入错误，请重新输入！\n");
				}
			}	
		}	
	}	
}