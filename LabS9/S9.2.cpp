#include <stdio.h>
int sdn(int a){
	int b=0;
	while(a!=0){
		b=b*10+a%10;
		a/=10;
	}
	return b;
}
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	printf("So dao nguoc cua %d la: %d",n,sdn(n));
}
