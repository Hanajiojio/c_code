#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//strcpy�������ַ��������ݸ��Ƶ�Ŀ���ַ�����,�����Ƶ�������"/0"������
//char *strcpy(char*dest,char*src)

char* my_strcpy(char* dest, char* src)
{
	assert(dest != NULL && src != NULL);
	char* ret = dest;
	while (*src != '\0')
	{
		*dest = *src;/*�׵�ַ��ֵ��Ӧ��һ��char�ĳ��ȵ�ֵ���и�ֵ*/
		dest++;/*ָ�������++��ָ�����ָ��ĵ�ַ����ƶ�һλ*/
		src++;/*�ӵ�һλ�����һ��\0֮ǰ��λ�ã��������*/
	}
	*dest = *src;
	//������\0Ҳ��ֵ
	return  ret;
}

int main()
{
	char arr1[] = "Believe yourself!";
	char arr2[] = "I'm fool!";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}