#include <stdio.h>
#include <math.h>

int cal(int n){
	int a,b,c;
	for(int i = 1;i<n;i++){
		a = i/100;
		b = (i%100)/10;
		c = (i%100)%10;
		if(pow(a,3)+pow(b,3)+pow(c,3) == i){
			printf("%d ",i);
		}
	}	
	return 0;
}


int main(){
	printf("1-999的水仙花数为：");
	
	int n = 1000;
	cal(n);
	return 0;	
} 
