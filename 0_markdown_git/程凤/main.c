#include<stdio.h>

int main()
{
	int bai, shi, ge;
	int res;
	int i;
	for (i = 100; i < 1000; i++)
	{
		bai = i / 100;
		shi = (i % 100) / 10;
		ge = (i % 100) % 10;
		res = ge*ge*ge + shi*shi*shi + bai*bai*bai;
		if (res == i)
		{
			printf("%d ", i);

		}
	}
	getchar();
}