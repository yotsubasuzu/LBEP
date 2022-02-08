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
	int dem=0,max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			dem++;
			if(dem>max){
				max=dem;
			}
		}else{
			dem=0;
		}
	}
	printf("Chuoi so duong lon nhat trong mang la: %d",max);
}
