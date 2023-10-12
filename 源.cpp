#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char url[1000];
	int n = 0;
	while(scanf("%c", &url[n]) != EOF)
	{
		n++;
	}
	for (int j = n; j >= 0; j--)
	{
		printf("%c ", url[j]);
	}
		
	return 0;
}/*int i = 0;
		while (scanf("%c", &url[n]))
		{
			if (url[i] != '\0')
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
		}*/

//#include <stdio.h>
//int main()
//{
//	char url[1000];
//
//	while (scanf("%s", &url) != EOF)
//	{
//		int i = 0, j;
//		while (i >= 0)
//		{
//			if (url[i] != '\0')
//			{
//				i++;
//			}
//			else
//			{
//				break;
//			}
//		}
//			
//		for (j = i-1; j >= 0; j--)
//		{
//			if (url[j]=='0')
//				continue;
//			else
//			{
//				
//				break;
//			}
//		}
//		
//		int m = j;
//		while (m>= 0)
//		{
//			printf("%c", url[m]);
//			m--;
//		}
//		if (url[0] == '0' && i == 1)
//			printf("0");
//	}
//
//	return 0;
//}
