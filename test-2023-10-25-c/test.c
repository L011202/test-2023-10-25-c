#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define ADD(x,y) ((x)+(y))
int Big(int x, int y)
{
	//int c=
	return x > y ? x : y;//��һ��;������β���ڶ�����return�Ľ�β
}
//int main()
//{
//	int a,b;
//	printf("����������,���ÿո����\n");
//	scanf("%d %d", &a,&b);
//	Big(a, b);
//	printf("%d\n", Big(a, b));
//	//printf("\a");
//	/*
//	typedef struct LNode {
//		ElemType date;
//		struct LNode*next;
//	}LNode,*LinkList;
//	/*
//	LNode������һ���ṹ�����ͣ�
//	����һ����Ա����date
//	������ΪElemType��һ��ָ����ͬ���ͽṹ���ָ��next
//	*/
//	/*
//	LinkList������һ��ָ��LNode���͵�ָ��
//	����ζ�������ʹ��LinkList���͵ı������洢һ��ָ��LNode�ṹ���ָ��
//	*/
//	//printf("%d\n", 4 * ADD(3, 6));
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if (1==i % 2 )
//		{
//			printf("%dΪ����\n", i);
//		}
//		else
//		{
//			printf("%dΪż��\n",i);
//		}
//		i++;
//	}
//	return 0;
//}
enum 
{
	A=1,
	B,C,D,E,F,G
};
int main()
{
	int i =1;
	/*
	for (i = 1; i < 100; i++)
	{
		if (1 == i % 2)
		{
			printf("%dΪ����\n", i);
		}
		else if( 0== i % 2) 
		{
			printf("%d��ż��\n", i);
		}
	}
	*/
	int a;
	char c;
	scanf("%d", &a);
	scanf("%c", &c);
	switch (c)
	{
		case A:
			printf("Monday\n");
			break;
		case B:
			printf("Tuesday\n");
		case C:
			printf("Wednesday\n");
			break;
		case D:
			printf("Thursday\n");
			break;
		case E:
			printf("Friday\n");
			break;
		case F:
			printf("Saturday\n");
			break;
		case G:
			printf("Sunday\n");
			break;
		default :
			printf("��������������������д˳���\n");
			break;
	}
	return 0;
}