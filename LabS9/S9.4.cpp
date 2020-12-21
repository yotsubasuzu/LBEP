#include <stdio.h>
int sortArray(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}

void inMang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap so a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	sortArray(a,n);
	printf("Mang sau khi sap xep:");
	inMang(a,n);
}
