#include <stdio.h>

void insertsort(int k[],int n){
	int i , j , temp;
	
	for(i = 1;i<n;i++){
		if(k[i] < k[i-1]){
			temp = k[i];
			
			for(j = i-1;k[j]>temp;j--){
				k[j+1] = k[j];
			}
			
			k[j+1] = temp;
		}
	}
}

int main(){
	int i,a[10] = {5,2,6,0,3,9,1,7,4,8};
	insertsort(a,10);
	printf("直接插入排序后结果为:");
	for(i = 0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
