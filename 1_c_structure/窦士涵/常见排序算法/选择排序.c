#include <stdio.h>

void selectsort(int k[],int n){
	int i , j , min , temp ;
	for(i = 0; i<n-1;i++){
		
		min = i;
		
		for(j = i+1;j<n;j++){
			
			if(k[j]<k[min]){
				min = j;
			}	
		}
		
		if(min != i){
			temp = k[min];
			k[min] = k[i];
			k[i] = temp;
		}
	}
}

int main(){
	int i,a[10] = {5,2,6,0,3,9,1,7,4,8};
	selectsort(a,10);
	printf("选择排序后结果为:");
	for(i = 0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
