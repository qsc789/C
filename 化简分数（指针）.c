#include<stdio.h>
int gcd(int a, int b)
{
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
void reduce(int numerator, int denominator, int* reduced_numerator, int* reduced_denominator)
{
	while (gcd(numerator, denominator) != 1)
	{
		int num = gcd(numerator, denominator);
		numerator /= num;
		denominator /= num;
	}
	*reduced_numerator = numerator;
	*reduced_denominator = denominator;

}
int main()
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	int* p1 = &x;
	int* p2 = &y;
	reduce(x, y, p1, p2);
	printf("%d %d\n", (*p1), (*p2));
	return 0;
}