#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define ADD(x,y) ((x)+(y))
int Big(int x, int y)
{
	//int c=
	return x > y ? x : y;//第一个;是语句结尾，第二个是return的结尾
}
//int main()
//{
//	int a,b;
//	printf("请输入数字,请用空格隔开\n");
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
//	LNode：这是一个结构体类型，
//	它有一个成员变量date
//	其类型为ElemType和一个指向相同类型结构体的指针next
//	*/
//	/*
//	LinkList：这是一个指向LNode类型的指针
//	这意味着你可以使用LinkList类型的变量来存储一个指向LNode结构体的指针
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
//			printf("%d为奇数\n", i);
//		}
//		else
//		{
//			printf("%d为偶数\n",i);
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
			printf("%d为奇数\n", i);
		}
		else if( 0== i % 2) 
		{
			printf("%d是偶数\n", i);
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
			printf("你的输入有误，请重新运行此程序\n");
			break;
	}
	return 0;
}