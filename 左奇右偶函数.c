
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//����һ���������飬ʵ��һ�����������ض���˳���������������е�Ԫ�أ��������������ߣ�ż���ֲ���������ұߡ�

int main()
{
	int i, j, a, b, trans;
	int arr[] = { 1,2,3,4 };
	a = sizeof(arr, arr[0]);/*�����С*/
	b = 0;/*ż������*/
	for (i = 0; i < a; i++)
	{
		if (i == (a - b))
			break;
		else if (arr[i] % 2 == 0)/*Ϊż��*/
		{
			for (j = (a - b - 1); j > i ; j--)/*���Ҳ������ѯ�������н���,���Ҳ�۳��Ѳ��ż��������ʼ*/
			{
				if (arr[j]%2 == 1)/*�ҵ��ұߵ�һ������*/
				{
					trans = arr[j];/*������ֵ��trans*/
					arr[j] = arr[i];/*����Ԫ���滻Ϊż��Ԫ�ص�ֵ*/
					arr[i] = trans;/*ż��Ԫ���滻Ϊ����Ԫ�ص�ֵ*/
				}
			}
			b++;/*ż��������һ*/
		}
	}
	return 0;
}