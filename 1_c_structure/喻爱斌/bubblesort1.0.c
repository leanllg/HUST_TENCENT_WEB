#include <stdio.h>
#include <stdlib.h>
int maopao(int a[],int n)
    {
     int i,j,temp;
     for(j=n-1;j>0;j--)
     {
      for(i=0;i<j;i++)
      {
        if(a[i]>a[i+1])//if的{}有时很重要
        {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
      }
     }
    }



int main()
{
    int n,i=6;
    int arr[]={3,6,5,1,4,2};
    maopao(arr,i);
    for(n=0;n<=5;n++)
    {
    printf("%d\n",arr[n]);
    }
    return 0;
}
