#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10; //��ʼ��
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 }; //��ȫ��ʼ��
	int arr2[10] = { 1,2,3,4,5 };            //����ȫ��ʼ����������Զ���0��ȫ
	int arr3[] = { 1,2,3,4,5 };

	char ch1[] = { 'a','b','c' };
	char ch2[] = "abcdef";
	printf("%d\n", sizeof(ch1));  //3
	printf("%d\n", sizeof(ch2));  //7
	printf("%d\n", strlen(ch1));  //���ֵ
	printf("%d\n", strlen(ch2));  //6
	printf("\n");  


	char ch3[10] = { 'a','b','c' };
	char ch4[11] = "abcdef";
	printf("%d\n", sizeof(ch3));  //��[]�������֣�ȡ����[]������֣���û�����֣�����3
	printf("%d\n", sizeof(ch4));  //��[]�������֣�ȡ����[]������ִ�С����û�����֣�����7
	printf("%d\n", strlen(ch3));  //��Զ��3����[]�������û��ϵ����û�����֣��������ֵ
	printf("%d\n", strlen(ch4));  //6
	return 0;
}

//%p -����ַ����ʽ��ӡ
//%x -��ӡ16��������
int main()
{
	printf("%p\n", 0x12);// 0000 0000 0000 0012
	printf("%x\n", 0x12);// 12

	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i <= 9; i++)
	{
		printf("arr[%d] = %p\n",i, &arr[i]);
	}

	    arr[0] = 00000018FF90F798   ����ĸ��ֽ�
		arr[1] = 00000018FF90F79C
		arr[2] = 00000018FF90F7A0
		arr[3] = 00000018FF90F7A4
		arr[4] = 00000018FF90F7A8
		arr[5] = 00000018FF90F7AC
		arr[6] = 00000018FF90F7B0
		arr[7] = 00000018FF90F7B4
		arr[8] = 00000018FF90F7B8
		arr[9] = 00000018FF90F7BC
	һά�������ڴ�����������ŵ�
	���������±����������ַ���ɵ͵��߱仯��

	return 0;
}










