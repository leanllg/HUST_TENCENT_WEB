#include <stdio.h>
int main()
{
    int num, sd, td, hd;
    for(   num=100  ;   num<1000  ;num++      )
    {
        hd =  num/100               ;
        td = num%100/10         ;
        sd = num%10         ;
        if( num==hd*hd*hd+td*td*td+sd*sd*sd                )
        {
            printf("Ë®ÏÉ»¨Êı×Ö£º%d\n", num);
        }
    }
    return 0;
}
