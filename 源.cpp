#include<stdio.h>

int main()
{
	int i, fh;
	float e, j = 1.0;
	e = 1;
	for (i = 1; 1; i++)
	{
		if (i % 2 == 1)
			fh = 1;
		else
			fh = -1;
		for (i = 1; j < -i; j++)
			j = j * i;
		if (1 / j < 10E-4)
			break;
		e = e + fh * 1.0 / j;
	}
	printf("e=%f", e);
	return 0;



}

