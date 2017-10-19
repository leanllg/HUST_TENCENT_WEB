#include<stdio.h>
void sort(int array[], int );


	int main()
{
	int i;
	int array[10] = { 9,8,7,6,5,4,3,2,1,0 };
	sort(array, 10);
	for (i = 0; i < 10; i++)
		printf("%d \n", array[i]);
	getchar();
}
	void sort(int array[], int n)
	{
		int i, x, temp;
		for (x = 1; x < 10; x++)
		{
			temp = array[x];
			i = x - 1;
			while (i >= 0 && array[i] > temp)
			{
				array[i + 1] = array[i];
				i--;
			}
			array[i + 1] = temp;
		}

}