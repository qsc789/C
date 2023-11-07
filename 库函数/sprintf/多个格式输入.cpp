#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 886;
	char str[] = "goodby";
	char dest[20];
	sprintf(dest, "%s is %d", str, num);
	puts(dest);
	return 0;
}

