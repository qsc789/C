#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char url[1000];
	
	scanf("%s", &url);
	
    int i = 0;
	while (i >= 0)//计算元素个数
	{
		if (url[i] != '\0')//格式
		{
			i++;
		}
		else
		{
			break;
		}

	}
	for (int j = i; j >= 0; j--)
		{
		printf("%c", url[j]);
	    }

	
		
	return 0;
}
