#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>

#define random(x)(rand()%x)
int s1 = 1,score=0,floor=1,wrong=0;

//�����������

void number()
{
	int i = 0,k=0;
	int num;//��Ų����������
	clock_t start,end;
	char ch[10]={' '};		//����û���������֣��û�����Ŀ����Ǳ�Ĵ�Ķ������������ַ�����
	char ch1[10];
	char change[10]=" ";	//���ת��Ϊ�ַ����͵������
	srand((int)time(0));	//�õ�ǰʱ��������
	start=clock();
	printf("\n\n\t\t\t*************�� %d ��************\n\n",floor);
	num = rand()%((s1*10)-s1) + s1;		//���������
	printf("\t\t\t\t\t%d\n",num);   //��������
	Sleep(1500);			//ͣ����ô�����
	system("cls");
	printf("\n\n\n\t\t\t     ���������ղſ���������\n\t\t\t\t\t");
	ch[10] = scanf("%s",&ch);		//�û����뿴�����������һ��һ�����룬һ��һ�����Ƚϣ�
	itoa(num,change,10);			//��ĳ�����������ַ������ͣ����ں��û���������Ƚϣ�
	if(strcmp(ch,change)==0)		//�Ƚϳɹ�
	{
		if(k==0)
		{
			system("cls");			//����
			printf("\n\n\n\t\t\t   ��ϲ�㣡���سɹ���������һ��\n");
			score=score+floor*10;
			s1 = s1*10;
			floor++;
			number();
		}
	}
	else			//�û�����ò���
	{
		printf("\t\t\t\t���ź����������!\n\n");
		printf("\t\t\t\t��ȷ������Ϊ��%d\n",num);
		wrong++;
		Sleep(2500);
		system("cls");
		printf("\n\n\n\t\t\t\t��ѡ����Ҫ���еĲ�����\n\n",score);
		
		while(1)
		{
			printf("\t\t\t\t1 �������ؿ�\n");
			printf("\t\t\t\t2 ��ͷ����\n");
			printf("\t\t\t\t3 �˳���Ϸ\n");
			ch1[10] = scanf("%s",&ch1);
			if(strcmp(ch1,"1")==0)		//���ѡ��1�Ļ�
			{
				wrong++;
				system("cls");			//����
				number();
			}
			else if(strcmp(ch1,"2")==0)		//���ѡ��2�Ļ�
			{
				s1=1;
				floor=1;
				score = 0;
				system("cls");			//����
				number();
			}
			else if(strcmp(ch1,"3")==0)		//���ѡ��3�Ļ�
			{
				system("cls");	//����
				end=clock();
				printf("\n\n\n\t\t\t\t���ѳɹ��˳���Ϸ\n");
				printf("\n\t\t\t\t���Ѿ�����%d��\n",floor);
				printf("\t\t\t\t���ķ���Ϊ��%d\n",score);
				printf("\t\t\t\t����ʱ��%d��\n",(end-start)/1000);
				printf("\t\t\t\t���Դ�����%d��\n",wrong);
				i =(floor-wrong)*100/floor;
				printf("\t\t\t\t��ȷ�ʣ�%d%%\n",i);
				exit(0);
			}
			else
			{
				system("cls");			//����
				printf("\n\n\n\t\t\t\t����������������룡\n");
			}
		}	
	}
	
}


//ȫ����
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
	printf("\n\n\t\t\t*************�� %d ��************\n\n",floor);
	for(j=0;j<floor;j++)
	{
		ch[j] = rand()%94 + 33;		//���������
		printf("\t\t\t\t\t%c \n",ch[j]);   //��������
	}
	Sleep(1500);
	system("cls");			//����
	printf("\n\n\n\t���������ղſ������ַ�,ÿ����һ���ַ��밴enter����лл������\n");
	for(j=0;j<floor;j++)
	{
		printf("\t\t\t\t\t");
		putIn[10] = scanf("\t\t\t\t%s",&putIn);		//�û����뿴��������ַ���һ��һ�����룬һ��һ�����Ƚ�
		if(ch[j]==putIn[0])		//�Ƚϳɹ�
		{
			k++;
			if(k==floor)
			{
				system("cls");			//����
				printf("\n\n\n\t\t\t��ϲ�㣡���سɹ���������һ��\n");
				score=score+floor*10;
				floor++;
				allKeys();
			}
		}
		else			//�û�����ò���
		{
			printf("\t\t\t���ź����������!\n\n");
			printf("\t\t\t��ȷ�����Ϊ��");
			for(j=0;j<floor;j++)
			{
				printf("%c  ",ch[j]);
			}
			wrong++;
			Sleep(3500);
			system("cls");
			printf("\n\n\n\t\t\t��ѡ����Ҫ���еĲ�����\n\n",score);
			while(1)
			{
				printf("\t\t\t\t1 �������ؿ�\n");
				printf("\t\t\t\t2 ��ͷ����\n");
				printf("\t\t\t\t3 �˳���Ϸ\n\t\t\t\t");
				ch1[10] = scanf("%s",&ch1);
				if(strcmp(ch1,"1")==0)		//���ѡ��1�Ļ�
				{
					system("cls");			//����
					allKeys();
				}
				else if(strcmp(ch1,"2")==0)
				{
					s1=1;
					floor=1;
					score = 0;
					system("cls");			//����
					allKeys();
				}
				else if(strcmp(ch1,"3")==0)		//���ѡ��3�Ļ�
				{
					system("cls");//����
					end=clock();
					printf("\n\n\n\t\t\t\t���ѳɹ��˳���Ϸ\n");
					printf("\n\t\t\t\t���Ѿ�����%d��\n",floor);
					printf("\t\t\t\t���ķ���Ϊ��%d\n",score);
					printf("\t\t\t\t����ʱ��%d��\n\n",(end-start)/1000);
					printf("\t\t\t\t���Դ�����%d��\n",wrong);
					i = (floor-wrong)*100/floor;
					printf("\t\t\t\t��ǰ��ȷ�ʣ�%d%%\n",i);
					exit(0);
				}
				else
				{
					system("cls");			//����
					printf("\n\n\n\t\t\t\t����������������룡\n");
				}
			}	
		}	
	}	
}

//���ɴ�д��ĸ

void capital()
{
	int i = 0,k=0,j;
	unsigned char ch[100];
	clock_t start,end;
	char putIn[100];
	char ch1[10];
	srand((int)time(0));
	start=clock();
	printf("\n\n\t\t\t*************�� %d ��************\n\n",floor);
	for(j=0;j<floor;j++)
	{
		ch[j] = rand()%26 + 65;		//���������
		printf("\t\t\t\t\t%c \n",ch[j]);   //��������
	}
	Sleep(1500);
	system("cls");			//����
	printf("\n\n\t���������ղſ������ַ�,ÿ����һ���ַ��밴enter����лл������\n");
	for(j=0;j<floor;j++)
	{
		printf("\t\t\t\t\t");
		putIn[10] = scanf("\t\t\t\t%s",&putIn);		//�û����뿴��������ַ���һ��һ�����룬һ��һ�����Ƚ�
		if(ch[j]==putIn[0])		//�Ƚϳɹ�
		{
			k++;

			if(k==floor)
			{
				system("cls");			//����
				printf("\n\n\n\t\t\t��ϲ�㣡���سɹ���������һ��\n");
		
				score=score+floor*10;
				floor++;
				capital();
			}
		}
		else			//�û�����ò���
		{
			printf("\t\t\t���ź����������!\n\n");
			wrong++;
			printf("\t\t\t��ȷ�����Ϊ��");
			for(i=0;i<floor;i++)
			{
				printf("%c  ",ch[i]);
			}
			Sleep(2500);
			system("cls");
			printf("\n\n\n\t\t\t��ѡ����Ҫ���еĲ�����\n\n",score);
			while(1)
			{
				printf("\t\t\t\t1 �������ؿ�\n");
				printf("\t\t\t\t2 ��ͷ����\n");
				printf("\t\t\t\t3 �˳���Ϸ\n\t\t\t\t");
				ch1[10] = scanf("%s",&ch1);
				if(strcmp(ch1,"1")==0)
				{
					system("cls");			//����
					allKeys();
				}
				else if(strcmp(ch1,"2")==0)
				{
					s1=1;
					floor=1;
					score = 0;
					system("cls");			//����
					allKeys();
				}
				else if(strcmp(ch1,"3")==0)		//���ѡ��3�Ļ�
				{
					system("cls");//����
					end=clock();
					printf("\n\n\n\t\t\t\t���ѳɹ��˳���Ϸ\n");
					printf("\n\t\t\t\t���Ѿ�����%d��\n",floor);
					printf("\t\t\t\t���ĵ÷֣�%d\n",score);
					printf("\t\t\t\t����ʱ��%d��\n",(end-start)/1000);
					printf("\t\t\t\t���Դ�����%d��\n",wrong);
					i = (floor-wrong)*100/floor;
					printf("\t\t\t\t��ȷ�ʣ�%d%%\n",i);
					exit(0);
				}
				else
				{
					system("cls");			//����
					printf("\n\n\n\t\t\t\t����������������룡\n");
				}
			}	
		}	
	}	
}


//����Сд��ĸ
void lowercase()
{
	int i = 0,k=0,j;
	unsigned char ch[100];
	clock_t start,end;
	char putIn[100];
	char ch1[10];
	srand((int)time(0));
	start=clock();
	printf("\n\n\t\t\t*************�� %d ��************\n\n",floor);
	for(j=0;j<floor;j++)
	{
		ch[j] = rand()%26 + 97;		//���������
		printf("\t\t\t\t\t%c\n ",ch[j]);   //��������
	}
	Sleep(1500);
	system("cls");			//����
	printf("\n\n\t���������ղſ������ַ�,ÿ����һ���ַ��밴enter����лл������\n");
	for(j=0;j<floor;j++)
	{
		printf("\t\t\t\t\t");
		putIn[10] = scanf("\t\t\t\t%s",&putIn);		//�û����뿴��������ַ���һ��һ�����룬һ��һ�����Ƚ�
		if(ch[j]==putIn[0])		//�Ƚϳɹ�
		{
			k++;
			
			if(k==floor)
			{
				system("cls");			//����
				printf("\n\n\n\t\t\t��ϲ�㣡���سɹ���������һ��\n");
				score=score+floor*10;
				floor++;
				lowercase();
			}
		}
		else			//�û�����ò���
		{
			printf("\t\t\t���ź����������!\n\n");
			printf("\t\t\t��ȷ�����Ϊ��");
			for(i=0;i<floor;i++)
			{
				printf("%c ",ch[i]);
			}
			wrong++;
			Sleep(2500);
			system("cls");
			printf("\n\n\n\t\t\t��ѡ����Ҫ���еĲ�����\n\n",score);
			while(1)
			{
				printf("\t\t\t\t1 �������ؿ�\n");
				printf("\t\t\t\t2 ��ͷ����\n");
				printf("\t\t\t\t3 �˳���Ϸ\n\t\t\t\t");
				ch1[10] = scanf("%s",&ch1);
				if(strcmp(ch1,"1")==0)		//���ѡ��1�Ļ�
				{
					system("cls");			//����
					allKeys();
				}
				else if(strcmp(ch1,"2")==0)
				{
					s1=1;
					floor=1;
					score = 0;
					system("cls");			//����
					allKeys();
				}
				else if(strcmp(ch1,"3")==0)		//���ѡ��3�Ļ�
				{
					system("cls");			//����
					end=clock();
					printf("\n\n\n\t\t\t\t���ѳɹ��˳���Ϸ\n");
					printf("\n\t\t\t\t���Ѿ�����%d��\n",floor);
					printf("\t\t\t\t���ĵ÷֣�%d\n",score);
					printf("\t\t\t\t����ʱ��%d��\n",(end-start)/1000);
					printf("\t\t\t\t���Դ�����%d��\n",wrong);
					i = (floor-wrong)*100/floor;
					printf("\t\t\t\t��ȷ�ʣ�%d%%\n",i);
					exit(0);
				}
				else
				{
					system("cls");			//����					
					printf("\n\n\n\t\t\t\t����������������룡\n");
				}
			}	
		}	
	}	
}