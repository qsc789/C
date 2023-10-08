#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n, k, a, b;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		k = m % n;
		a = m;
		b = n;
		for (; k != 0;)
		{
			m = n;
			n = k;
			k = m % n;
		}
		printf("%d\n", n);
	}
	return 0;
}