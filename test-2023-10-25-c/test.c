#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define ADD(x,y) ((x)+(y))
int Big(int x, int y)
{
	//int c=
	return x > y ? x : y;//��һ��;������β���ڶ�����return�Ľ�β
}
int main()
{
	int a,b;
	printf("����������,���ÿո����\n");
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
	LNode������һ���ṹ�����ͣ�
	����һ����Ա����date
	������ΪElemType��һ��ָ����ͬ���ͽṹ���ָ��next
	*/
	/*
	LinkList������һ��ָ��LNode���͵�ָ��
	����ζ�������ʹ��LinkList���͵ı������洢һ��ָ��LNode�ṹ���ָ��
	*/
	//printf("%d\n", 4 * ADD(3, 6));
	return 0;
}