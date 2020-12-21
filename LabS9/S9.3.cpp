#include <stdio.h>
int soFibonacci_n(int a){
	if(a<=0) return 0;
	if(a<=2) return 1;
	else{
		int x=0, y=1, z=1;
		for(int i=3;i<=a;i++){
			x=y;
			y=z;
			z=x+y;
		}
		return z;
	}
}

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	printf("So Fibonacci thu %d la: %d",n,soFibonacci_n(n));
}
