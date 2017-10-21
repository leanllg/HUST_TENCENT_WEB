#include <stdio.h>
void Insertion_Sort(int a[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=a[i];
        for(j=i;j>0&&a[j-1]>temp;--j)
            a[j]=a[j-1];
        a[j]=temp;
    }
}

int main()
{
    int a[]={1,3,63,5,78,9,12,52,8};
    int n=sizeof(a)/sizeof(int),i;
    Insertion_Sort(a,n);
    for(i=0;i<n;i++)
        printf("%d\n ",a[i]);
    return 0;
}
