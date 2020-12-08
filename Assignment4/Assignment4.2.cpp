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
	
	int min = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<min && arr[i]>0){
			min=arr[i];
		}
	}
	if(min>0){
		printf("So nho nhat: %d",min);
	}else{
		printf("Mang toan so am");
		}
}


