#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//һά���鴫��
void test_1_1(int arr[])
{
	printf("��һά���鴫�Σ���\n��int arr[]������\n");
};
void test_1_2(int arr[1]) 
{
	printf("��int arr[1]��������С\n");
};
void test_1_3(int *p)
{
	printf("��int *pָ��\n");
};
//һάָ�����鴫��
void test_2_1(int *arr[1])
{
	printf("��һάָ�����鴫�Σ���\n��int *arr[1]��Ԫ�ش�С��һάָ������\n");
};
void test_2_2(int **arr)
{
	printf("��int **arr����ָ��\n");
	/*һάָ�����鴫��ʵ���ϴ��ݵ����������Ԫ�ص�ַ���������ÿ��Ԫ����һ��ָ�롣
	int** arr ��ʾָ��ָ���ָ�룬���ܹ�ָ��һάָ�����飬�������Ǵ��ݵ������ַ��*/
};

//��ά���鴫��
void test_3_1(int arr3[2][1])
{
	printf("����ά���鴫�Σ���\n��int arr3[2][1]���������й̶�\n");
};
void test_3_2(int arr3[2][1])
{
	printf("��int arr3[2][1]���������пɱ��й̶�\n");
};
void test_3_3(int arr[1])
{
	printf("��int arr[1]һά����������С��ԭ��ά�����д�С\n");
};
void test_3_4(int(*p)[1])
{
	printf("��int (*p)[1]ָ��һά�����ָ�룬ָ���һά����Ĵ�С��ԭ��ά�����д�С\n");
};
int main()
{
	//һά���鴫��
	int arr1[1] = { 0 };
	test_1_1(arr1);
	test_1_2(arr1);
	test_1_3(arr1);
	//һάָ�����鴫��
	int* arr2[1] = { arr1 };
	test_2_1(arr1);
	test_2_2(arr1);
	//��ά���鴫��
	int arr3[2][1] = {arr1,arr1 };
	test_3_1(arr3);
	test_3_2(arr3);
	test_3_3(arr3);
	test_3_4(arr3);
	return 0;
}
