#define  _CRT_SECURE_NO_WARNINGS 1
//��������ʲô
//��������Ԫ�صĵ�ַ
//�������������� ����ʾ��������
// 1��sizeof����������
// 2��&������ 
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));  //40

	printf("%p\n", &arr[0]); //00000036A14FFA38

	printf("%p\n", arr);     //00000036A14FFA38
	printf("%p\n", arr+1);   //���4

	printf("%p\n", &arr);    //00000036A14FFA38  ,ȡ����������ĵ�ַ
	printf("%p\n", &arr+1);  //���40
	return 0;
}








