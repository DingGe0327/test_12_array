#define  _CRT_SECURE_NO_WARNINGS 1
//ð������  bubble_sort
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i, j;  //ȷ������ sz-1 ��
	for (i = 0; i < sz-1 ; i++)
	{
		//һ��ð������Ĺ���
		for (j = 0; j < sz - 1 -i ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	//int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };  //0 1 2 3 4 5 6 7 8 9 10
	int arr[] = { 2,8,9,2,3,5,1,0 };           //0 1 2 2 3 5 8 9
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	//printf("%d ", arr);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}













