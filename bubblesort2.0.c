#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,n=6;
    int a[]={3,6,5,1,4,2};
    int i,j,temp;
     for(j=n-1;j>0;j--)
     {
      for(i=0;i<j;i++)
      {
        if(a[i]>a[i+1])
        {temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
      }
     }
      for(x=0;x<=5;x++)
    {
    printf("%d\n",a[x]);
    }
    return 0;
}
