#include <stdio.h>
#define MAX 5
void change(int * x,int * y);
int main(void)
{
    int shu[MAX];
    for(int z =0;z<MAX;z++)
        scanf("%d",&shu[z]);
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX-i;j++)
        {
            if(shu[j]>shu[j+1])
                change(&shu[j],&shu[j+1]);
                else continue;
        }
    }
    for(int x = 0;x<MAX;x++)
    printf("%d ",shu[x]);
    return 0;
}
void change(int * x,int * y)
{
    int z = *x;
    *x=*y;
    *y=z;
}
