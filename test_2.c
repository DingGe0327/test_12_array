#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr1;  //数组名是数组首元素的地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
	      printf("%d ", *p);
		  p++;
	}
	 
	//printf("%d ", *p);  //1
	return 0;
}












