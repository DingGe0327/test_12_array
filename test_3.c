#define  _CRT_SECURE_NO_WARNINGS 1
//二维数组
#include <stdio.h>
int main()
{
	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9 };
	    //1,2,3,4
		//5,6,7,8
		//9,\0,\0,\0
	int arr2[3][4] = { {1,2},{3,4},{5,6} };
	    //1,2,0,0
        //3,4,0,0
        //5,6,0,0
	int arr3[][4] = { {1,2},{3,4},{5,6} };  //省行不省列
	    //1,2,0,0
	    //3,4,0,0
	    //5,6,0,0
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
      	//1,2,0,0
        //3,4,0,0
        //5,6,0,0
	return 0;
}
//二维数组在内存中的存储
int main()
{
	int arr2[3][4] = { {1,2},{3,4},{5,6} };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n",i, j, &arr2[i][j]);
		}

	}
     	& arr[0][0] = 0000003EC252F678   //连续的，相差都是4
		& arr[0][1] = 0000003EC252F67C
		& arr[0][2] = 0000003EC252F680
		& arr[0][3] = 0000003EC252F684
		& arr[1][0] = 0000003EC252F688
		& arr[1][1] = 0000003EC252F68C
		& arr[1][2] = 0000003EC252F690
		& arr[1][3] = 0000003EC252F694
		& arr[2][0] = 0000003EC252F698
		& arr[2][1] = 0000003EC252F69C
		& arr[2][2] = 0000003EC252F6A0
		& arr[2][3] = 0000003EC252F6A4

	int* p = &arr2[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);  //1 2 0 0 3 4 0 0 5 6 0 0
		p++;
	}
	return 0;
}






