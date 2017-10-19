#include <stdio.h>
#define N 6
void bubble_sort(int *a, int n)
{
	int i = 0, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j + 1] < a[j])
			{
				temp = a[j ];
				a[j ] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main()
{
	int num[N] = { 45, 23, 89, 67, 14, 32 };
	bubble_sort(num, N);
	for (int i = 0; i < N ; i++)
	{
		printf("%d\n", num[i]);
		

	}
	system("pause");
}