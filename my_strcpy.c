#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//strcpy函数将字符串的内容复制到目标字符串中,待复制的内容以"/0"结束。
//char *strcpy(char*dest,char*src)

char* my_strcpy(char* dest, char* src)
{
	assert(dest != NULL && src != NULL);
	char* ret = dest;
	while (*src != '\0')
	{
		*dest = *src;/*首地址的值对应的一个char的长度的值进行赋值*/
		dest++;/*指针变量名++，指针变量指向的地址向后移动一位*/
		src++;/*从第一位到最后一个\0之前的位置，逐个后移*/
	}
	*dest = *src;
	//将最后的\0也赋值
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