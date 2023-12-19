#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//一维数组传参
void test_1_1(int arr[])
{
	printf("【一维数组传参：】\n①int arr[]数组名\n");
};
void test_1_2(int arr[1]) 
{
	printf("②int arr[1]数组名大小\n");
};
void test_1_3(int *p)
{
	printf("③int *p指针\n");
};
//一维指针数组传参
void test_2_1(int *arr[1])
{
	printf("【一维指针数组传参：】\n①int *arr[1]带元素大小的一维指针数组\n");
};
void test_2_2(int **arr)
{
	printf("②int **arr二级指针\n");
	/*一维指针数组传参实际上传递的是数组的首元素地址，该数组的每个元素是一个指针。
	int** arr 表示指向指针的指针，它能够指向一维指针数组，但并不是传递的数组地址。*/
};

//二维数组传参
void test_3_1(int arr3[2][1])
{
	printf("【二维数组传参：】\n①int arr3[2][1]数组名行列固定\n");
};
void test_3_2(int arr3[2][1])
{
	printf("②int arr3[2][1]数组名行行可变列固定\n");
};
void test_3_3(int arr[1])
{
	printf("③int arr[1]一维数组名，大小是原二维数组列大小\n");
};
void test_3_4(int(*p)[1])
{
	printf("④int (*p)[1]指向一维数组的指针，指向的一维数组的大小是原二维数组列大小\n");
};
int main()
{
	//一维数组传参
	int arr1[1] = { 0 };
	test_1_1(arr1);
	test_1_2(arr1);
	test_1_3(arr1);
	//一维指针数组传参
	int* arr2[1] = { arr1 };
	test_2_1(arr1);
	test_2_2(arr1);
	//二维数组传参
	int arr3[2][1] = {arr1,arr1 };
	test_3_1(arr3);
	test_3_2(arr3);
	test_3_3(arr3);
	test_3_4(arr3);
	return 0;
}
