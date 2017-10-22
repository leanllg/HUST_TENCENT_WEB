#include <stdio.h>

void insertion_sort(int a[],int);

main()
{
    int i;
    int a[10] = {23,43,56,41,9,80,123,1,14,90};
    insertion_sort(a,10);
    for (i = 0;i < 10;i++)
        printf("%d ",a[i]);
    printf("\n");
}

void insertion_sort(int a[],int n)//a为数组，n为数组个数
{
    int i,j,key;

    for (j = 1;j < n;j++) {
        key = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > key) {
            a[i+1] = a[i];
            i--;
        }
        a[i+1] = key;
    }
}



