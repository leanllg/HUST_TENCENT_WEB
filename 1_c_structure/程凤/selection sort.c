#include <stdio.h>
#define N 6
void selection_sort(int *a, int n)
{
	int i = 0, j = 0;
	int min, temp;
	
	for (i=0; i < n - 1; i++)
	{
		min = i;
		for (j=i; j < n ; j++)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}


}


int main()
{
	int num[N] = { 23,89,45,11,56,34 };
	int i = 0;
	selection_sort(num, N);
	for ( i = 0; i <N; i++)
	{
		printf("%d ", num[i]);
	}
	system("pause");
}