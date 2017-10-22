#include <stdio.h>
#define MAX 5
void change(int * a,int * b);
int main(void)
{
   int shu[MAX];
   for(int x = 0;x<MAX;x++)
    scanf("%d",&shu[x]);
   for(int j = 0;j<MAX;j++)
    {
       int min = j;
       for(int i=j;i<MAX;i++)
   {

       if(shu[i]<shu[min])
        {
            min = i;
        }
        else continue;
   }
   change(&shu[min],&shu[j]);
    }
    for(int z = 0;z<MAX;z++)
        printf("%d ",shu[z]);
    return 0;

}
void change(int * a,int * b)
{
    int z = *a;
    *a = *b;
    *b = z;
}
