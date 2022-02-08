#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	int arr[n];
	
	int x,f; //f=0: ko nam trong, f=1: co trong mang
	for(int i=0;i<n;i++){
//		printf("Nhap so arr[%d]: ",i);
//		scanf("%d",&x);
//		for(int j=0;j<i;j++){
//			while(x==arr[j]){
//				printf("Nhap lai so arr[%d]: ",i);
//				scanf("%d",&x);
//			}
//		}
//		arr[i]=x;
		
		do{
			f=0;
			printf("nhap arr[%d]: ",i);
			scanf("%d",&x);
			for(int j=0;j<i;j++){
				if(x==arr[j]){
					f=1;
					break;
				}
			}
		}while(f==1);
		arr[i]=x;
	}
	printf("Cac phan tu trong mang la: ");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
	
}
