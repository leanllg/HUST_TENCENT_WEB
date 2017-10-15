#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


int ScanForMin(int a[],int begin,int end)
{
    int i,min=a[begin],j=begin;
    for(i=begin+1;i<=end;++i)
    {
        if(a[i]<min)
        {
            min=a[i];
            j=i;
        }
    }
    return j;
}
void Selection_Sort(int a[],int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        int j=ScanForMin(a,i,n-1);
        swap(&a[i],&a[j]);
    }
}
int main()
{
    int a[]={3,5,44,52,14,48,62,31,25};
    int n=sizeof(a)/sizeof(int),i;
    Selection_Sort(a,n);
    for(i=0;i<n;i++)
        printf("%d\n ",a[i]);
    return 0;
}
