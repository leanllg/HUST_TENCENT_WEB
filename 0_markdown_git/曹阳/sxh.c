#include <stdio.h>
int main(void)
{
    int num;
    for(num = 100;num <= 999; num++)
    {
        int g,s,b;
        g = num%10;
        s = (num/10)%10;
        b = num/100;
        if(num == s*s*s+g*g*g+b*b*b)
            printf("%d\n",num);
    }

    return 0;
}
