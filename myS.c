#include "myH.h"

void main()
{
	char ch[10];
	printf("\n\n\t\t****************��ӭ�������ѵ����Ϸ***************\n");
	while(1)
	{
		printf("\n\n\t\t\t\t��ѡ����Ҫ�����ģʽ\n");
		printf("\n\n\t\t\t\t1   ����ģʽ");
		printf("\n\n\t\t\t\t2   ȫ����ģʽ");
		printf("\n\n\t\t\t\t3   ��д��ĸģʽ");
		printf("\n\n\t\t\t\t4   Сд��ĸģʽ\n\t\t\t\t");
		ch[10] = scanf("%s",&ch);
		if(strcmp(ch,"1")==0)
		{
			system("cls");
			printf("\n\n\t\t****************��ӭ��������ģʽ***************\n");
			number();
		}
		else if(strcmp(ch,"2")==0)
		{
			system("cls");
			printf("\n\n\t\t****************��ӭ����ȫ����ģʽ***************\n");
			allKeys();
		}
		else if(strcmp(ch,"3")==0)
		{
			system("cls");
			printf("\n\n\t\t****************��ӭ�����д��ĸģʽ***************\n");
			capital();
		}
		else if(strcmp(ch,"4")==0)
		{
			system("cls");
			printf("\n\n\t\t****************��ӭ����Сд��ĸģʽ***************\n");
			lowercase();
		}
		else
		{
			system("cls");
			printf("\n\n\t\t\t\t�����������������");
		}
	}	
}
