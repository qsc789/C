#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int my_strlen(char str[])//参数部分写成数组形式
int my_strlen(char* str)//str存放a的地址//参数部分写成指针形式
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;//找下一个字符
	}
	return count;
}

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);//首元素地址
	printf("%d\n", len);
	
	
		
	return 0;
}