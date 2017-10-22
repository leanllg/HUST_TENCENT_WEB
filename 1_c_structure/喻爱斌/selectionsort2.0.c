#include <stdio.h>
#include <stdlib.h>
//重点找到最小元素的下标
int main()
{
    int i,j,min,temp;
    int arr[]={5,4,6,2,1,3};
    for(j=0;j<=5;j++)
    {
      min=j;
     for(i=j+1;i<=5;i++)
     {

     if(arr[min]>arr[i])
        {
         min=i;
        }

     }
     temp=arr[j];
     arr[j]=arr[min];
     arr[min]=temp;
    }
    int n;
    for(n=0;n<=5;n++)
    {
    printf("%d\n",arr[n]);
    }
    return 0;
}
