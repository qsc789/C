#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Fact(int n)
{
	int res = n;
	if (n > 1)
		res = res * Fact(n - 1);
	return res;
}


int main()
{
	int n, cnt;
	scanf("%d", &n);
	cnt = Fact(n);
	printf("%d\n", cnt);

	return 0;
}

