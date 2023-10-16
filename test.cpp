#define  _CRT_SECURE_NO_WARNINGS

//问题 K: 弟弟的作业
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[20] = { 0 };


	int i, j, k, sum = 0;
	while (scanf("%s", str) != EOF)
	{
		int len = strlen(str);
		char num1[4] = { 0 }, num2[4] = { 0 }, num3[100] = { 0 };
		int num4;
		for (i = 0; i <= len - 1; i++)
		{
			if (str[i] == '+' || str[i] == '-')
				j = i;
			else if (str[i] == '=')
				k = i;

		}
		for (i = 0; i < j; i++)
			num1[i] = str[i];
		for (i = j + 1; i < k; i++)
			num2[i - j - 1] = str[i];
		for (i = k + 1; i <= len; i++)
			num3[i - k - 1] = str[i];

		if (str[j] == '+')
			num4 = atoi(num1) + atoi(num2);
		else
			num4 = atoi(num1) - atoi(num2);
		if (str[len - 1] != '?')
		{
			if (atoi(num3) == num4)
				sum++;
		}
		//重置str
		for (int cur = 0; cur < 20; cur++)
		{
			str[cur] = '\0';
		}

	}
	printf("%d\n", sum);
	return 0;
}
