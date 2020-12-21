#include <stdio.h>
void inSole(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]%2!=0)
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
	printf("So le trong mang la: ");
	inSole(a,n);
}
