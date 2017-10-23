#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr[]={5,4,6,7,99,1,3,2};
    n=sizeof(arr)/sizeof(arr[0]);//查阅资料得
    int i,j,temp;
    for(i=1;i<=n-1;i++)
    {
         temp=arr[i];
         for(j=i-1;j>=0&&arr[j]>temp;j--) //j>=0开始没注意
         {
             arr[j+1]=arr[j];
         }
         arr[j+1]=temp;

    }
    for(i=0;i<=n-1;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;

}
