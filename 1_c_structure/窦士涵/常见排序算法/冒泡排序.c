#include <stdio.h> 

void bubblesort(int k[],int n){
	int i,j,temp;
	for(i = 0; i<n-1; i++){
		for(j = n-1; j>i; j--){
			if(k[j-1] > k[j]){ 
				temp = k[j-1];
				k[j-1] = k[j];
				k[j] = temp;
			}
		}
	}
}

int main(){
	int i,a[10] = {5,2,6,0,3,9,1,7,4,8};
	bubblesort(a,10);
	printf("冒泡排序后结果为:");
	for(i = 0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
