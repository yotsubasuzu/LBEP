#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap so arr[%d]: ",i);
		scanf("%d",&arr[i]);
		
		int j=i-1;
		int tmp = arr[i];
		for(;j>=0 && tmp<arr[j];){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=tmp;
	}
	
	printf("Mang da nhap sau khi sap xep: ");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
