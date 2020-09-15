#include<stdio.h>

int process(int, int);

int main()
{
	int x[10], pre[10], real[10];
	int* n = x;
	int y = 42;
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		if (scanf_s("%d", &x[i]) != 1)
		{
			printf("ERROR");
			return 1;
		}
		else if (x[i] < 0 || x[i] > 1000)
		{
			printf("ERROR");
			return 1;
		}
	}
	for (int j = 0; j < 10; j++, n++)
	{
		pre[total] = process(*n, y);
		for (int i = 0; i < total; i++)
		{
			if (pre[i] == pre[total])
			{
				total--;
				i = total;
			}
		}
		total++;
	}
	printf("\n%d", total);
	return 0;
}

int process(int a, int b)
{
	return a % b;
}
