#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 10; //初始化
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 }; //完全初始化
	int arr2[10] = { 1,2,3,4,5 };            //不完全初始化，后面的自动用0补全
	int arr3[] = { 1,2,3,4,5 };

	char ch1[] = { 'a','b','c' };
	char ch2[] = "abcdef";
	printf("%d\n", sizeof(ch1));  //3
	printf("%d\n", sizeof(ch2));  //7
	printf("%d\n", strlen(ch1));  //随机值
	printf("%d\n", strlen(ch2));  //6
	printf("\n");  


	char ch3[10] = { 'a','b','c' };
	char ch4[11] = "abcdef";
	printf("%d\n", sizeof(ch3));  //若[]里有数字，取决于[]里的数字；若没有数字，则是3
	printf("%d\n", sizeof(ch4));  //若[]里有数字，取决于[]里的数字大小；若没有数字，则是7
	printf("%d\n", strlen(ch3));  //永远是3，和[]里的数字没关系，若没有数字，则是随机值
	printf("%d\n", strlen(ch4));  //6
	return 0;
}

//%p -按地址的形式打印
//%x -打印16进制数字
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

	    arr[0] = 00000018FF90F798   相差四个字节
		arr[1] = 00000018FF90F79C
		arr[2] = 00000018FF90F7A0
		arr[3] = 00000018FF90F7A4
		arr[4] = 00000018FF90F7A8
		arr[5] = 00000018FF90F7AC
		arr[6] = 00000018FF90F7B0
		arr[7] = 00000018FF90F7B4
		arr[8] = 00000018FF90F7B8
		arr[9] = 00000018FF90F7BC
	一维数组在内存中是连续存放的
	随着数组下标的增长，地址是由低到高变化的

	return 0;
}










