#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu mang arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	int tong=0,tongmax=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			tong=tong+arr[i];
			if(tong>tongmax){
				tongmax=tong;
			}
		//	printf("\nTong: %d",tong);
		}else if(arr[i]<0){
			tong=0;
		}
	}
	printf("\nTong cac so nguyen duong lon nhat: %d",tongmax);
}
