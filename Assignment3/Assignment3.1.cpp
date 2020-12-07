#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	int k=1;
	for(int i=0;k<n;i++){
		if(k%2==0){
			printf("\nCac so chan nho hon %d la: %d",n,k);
		}
		k++;
	}
}
