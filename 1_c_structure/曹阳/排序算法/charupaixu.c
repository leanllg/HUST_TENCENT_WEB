#include <stdio.h>
#define MAX 5
void change(int * x,int * y);
int main(void)
{
    int shu[MAX];
    int x;
    for(int i=0;i < MAX;i++)
      scanf("%d ",&shu[i]);
    for(int j=1;j < MAX;j++)
    {
        for( x = j-1;x >= 0;x--){
                if(shu[x+1]<shu[x])
              change(&shu[x+1],&shu[x]);
        }

    }
    for(int c=0;c<MAX;c++)
        printf("%d ",shu[c]);

    return 0;
}
void change(int * x,int * y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

