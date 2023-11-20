#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char dest[100];
	char str1[] = "Hello";
	char str2[] = "Word!";
	int len1 = sprintf(dest, "%s, % s", str1, str2);
	printf("%s\n%d", dest, len1);
	return 0;
}

