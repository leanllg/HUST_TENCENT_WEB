#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *p,int len)
{
    int i = 0;
    int j = 0;
    for(i = 0;i<len-1;i++)
        {
            for(j = 0;j<len -1-i;j++)
                {
                    if(p[j]>p[j+1])
                        {
                            int tmp = p[j];
                            p[j] = p[j+1];
                            p[j+1] = tmp;
                        }
                }
        }
}

int main()
{
    int num[5]={33,71,50,68,26};
    int i=0;
    bubblesort(num,5);
    for(i=0;i<5;i++)
        {
        printf("%d ",num[i]);
        }
return 0;
}
