#include <stdio.h>
int main(void)
{
	int p,a,b,c;
	printf( "水仙花数为:\n");
    for (p=99;p<999;++p)
	{
		int a,b,c;
		a=p/100;
	    b=(p-100*a)/10;
	    c=p-100*a-10*b;

		if (p==a*a*a+b*b*b+c*c*c)
		printf("%d\n",p);
	}
	printf("THE END\n");
		
	return 0;
 } 
