#include<stdio.h>
void swap(int a, int b);
void sort(int arr[], int len);


int main()
{
int i;
int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
sort(arr, 10);
for (i = 0; i < 10; i++)
printf("%d\n", arr[i]);
getchar();

}
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void sort(int arr[], int len)
{
	for (int i = 0, min = 0; i < len - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < len; j++)
			if (arr[min] > arr[j])
				min = j;
		swap(arr[min], arr[i]);
	}
}