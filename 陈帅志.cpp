#include <stdio.h> 
#include <stdlib.h>
void main() 
{ 
    int a,b,c,n; 
    printf("The water flower'number is "
	for(n=100;n<999;n++) 
    { 
        a=n/100;              /*分解出百位*/ 
        b=n%100/10;           /*分解出十位*/ 
        c=n%10;               /*分解出个位*/ 
        if(n==a*a*a+b*b*b+c*c*c) 
        { 
            printf("%d",n); 
        } 
    } 
    printf(".\n"); 
    reaturn 0；
} 