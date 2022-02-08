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
	int x=0;
	for(int i=(n-1);i>=0;i--){
		if(arr[i]%2!=0){
			x=arr[i];
			break;
		}
	}
	if(x==0){
		printf("Mang ko co so le");
	}else{
		printf("So le cuoi cung: %d",x);
	}
}
