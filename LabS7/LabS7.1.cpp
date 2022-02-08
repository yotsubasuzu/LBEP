#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap so arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("Nhap so x: ");
	scanf("%d",&x);
	
	int y=x;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			y=arr[i];
		}
	}
	
	if(y==x){
		printf("Mang toan so lon hon %d",x);
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]<x && arr[i]>y){
				y=arr[i];
			}
		}
		printf("So trong mang nho hon va gan x nhat la: %d",y);
	}
}
