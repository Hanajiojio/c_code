
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//输入一个整数数组，实现一个函数。按特定的顺序重新排列数组中的元素，奇数在数组的左边，偶数分布在数组的右边。

int main()
{
	int i, j, a, b, trans;
	int arr[] = { 1,2,3,4 };
	a = sizeof(arr, arr[0]);/*数组大小*/
	b = 0;/*偶数个数*/
	for (i = 0; i < a; i++)
	{
		if (i == (a - b))
			break;
		else if (arr[i] % 2 == 0)/*为偶数*/
		{
			for (j = (a - b - 1); j > i ; j--)/*从右侧向左查询奇数进行交换,从右侧扣除已查出偶数个数后开始*/
			{
				if (arr[j]%2 == 1)/*找到右边第一个奇数*/
				{
					trans = arr[j];/*奇数赋值给trans*/
					arr[j] = arr[i];/*奇数元素替换为偶数元素的值*/
					arr[i] = trans;/*偶数元素替换为奇数元素的值*/
				}
			}
			b++;/*偶数个数加一*/
		}
	}
	return 0;
}