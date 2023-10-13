#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int my_strlen(char str[])//参数部分写成数组形式
int my_strlen(char* str)//str存放a的地址//参数部分写成指针形式
{
	if (*str != '\0')
		return 1 + my_strlen(str+1);//str+1为b的地址，不推荐str++
	else
		return 0;
}

int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);//首元素地址
	printf("%d\n", len);
	
	
		
	return 0;
}