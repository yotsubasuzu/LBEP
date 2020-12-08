#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=(n-1);i>=0;i--){
		if(arr[i]%2!=0){
			printf("So le: %d",arr[i]);
			break;
		}
	}
}
