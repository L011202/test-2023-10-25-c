#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define ADD(x,y) ((x)+(y))
int Big(int x, int y)
{
	//int c=
	return x > y ? x : y;//第一个;是语句结尾，第二个是return的结尾
}
int main()
{
	int a,b;
	printf("请输入数字,请用空格隔开\n");
	scanf("%d %d", &a,&b);
	Big(a, b);
	printf("%d\n", Big(a, b));
	//printf("\a");
	/*
	typedef struct LNode {
		ElemType date;
		struct LNode*next;
	}LNode,*LinkList;
	/*
	LNode：这是一个结构体类型，
	它有一个成员变量date
	其类型为ElemType和一个指向相同类型结构体的指针next
	*/
	/*
	LinkList：这是一个指向LNode类型的指针
	这意味着你可以使用LinkList类型的变量来存储一个指向LNode结构体的指针
	*/
	//printf("%d\n", 4 * ADD(3, 6));
	return 0;
}