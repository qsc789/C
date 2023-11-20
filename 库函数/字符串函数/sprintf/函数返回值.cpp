#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//sprintf函数的返回值不包含目标字符串末尾自动添加的'\0'
int main()
{
	int num = 886;
	char str[] = "goodby";
	char dest[20];
	int len = sprintf(dest, "%s is %d", str, num);
	puts(dest);
	printf("len = %d\n", len);
}

