#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap 1 so n= ");
	scanf("%d",&n);
	
	int f;
	f=1/sqrt(5)*(pow(((1+sqrt(5))/2),n)-pow(((1-sqrt(5))/2),n));
	printf("So f(%d) trong day Fibonacci la %d",n,f);
}
