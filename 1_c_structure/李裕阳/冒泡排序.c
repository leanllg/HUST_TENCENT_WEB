#include <stdio.h>
void sort(int array[], int n);

int main() 
{
	int array[] = { 9,8,7,6,5,4,3,2,1,0 };
	int n = 10;
	sort(array, n);
	int i;
	for (i = 0; i < n; i++)
	printf("%d\n", array[i]);
	getchar();
	return 0;
}
void sort(int array[], int n)
{
	int i, x, temp;
	for (i = 0; i < n - 1; i++)
		for (x = 0; x < n - 1 - i; x++)
			if (array[x] > array[x + 1])
			{
				temp = array[x];
				array[x] = array[x + 1];
				array[x + 1] = temp;
			}
}