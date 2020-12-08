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
	int dem=1,max=1;
	for(int i=0;i<n;i++){
		if(arr[i]>0&&arr[i+1]==arr[i]+1){
			dem++;
			if(dem>max){
				max=dem;	
			}
		}else if(arr[i]>0&&arr[i+1]!=arr[i]+1){
			dem=1;
		}
	}
	printf("Chuoi so duong lon nhat trong mang la: %d",max);
}
