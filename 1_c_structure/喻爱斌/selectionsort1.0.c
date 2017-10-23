#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,min,temp;
    int arr[]={5,4,6,2,1,3};
    for(j=0;j<=5;j++)
    {
      min=arr[j];
     for(i=j;i<=4;i++)
     {

     if(min>arr[i+1])
       {
        temp=min;
        min=arr[i+1];
        arr[i+1]=temp;
       }
     }
        arr[j]=min;
    }
    int n;
    for(n=0;n<=5;n++)
    {
    printf("%d\n",arr[n]);
    }
    return 0;
}
