#include <stdio.h>
int main(){
	int n,s=0;
	printf("Nhap so n:");
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("\nUoc cua %d la: %d",n,i);
			s+=i;
		}
	}
	printf("\nTong cua cac uoc cua %d la: %d",n,s);
}
