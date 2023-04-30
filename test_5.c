#define  _CRT_SECURE_NO_WARNINGS 1
//数组名是什么
//是数组首元素的地址
//但是有两个例外 ：表示整个数组
// 1、sizeof（数组名）
// 2、&数组名 
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));  //40

	printf("%p\n", &arr[0]); //00000036A14FFA38

	printf("%p\n", arr);     //00000036A14FFA38
	printf("%p\n", arr+1);   //相差4

	printf("%p\n", &arr);    //00000036A14FFA38  ,取出的是数组的地址
	printf("%p\n", &arr+1);  //相差40
	return 0;
}








