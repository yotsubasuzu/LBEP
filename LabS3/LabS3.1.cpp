#include <stdio.h>
int main(){
	long long n,x=0;
	printf("Nhap 1 so: ");
	scanf("%I64d",&n);
	do{
		x = x*10 + n%10;
		n/=10;
	}
	while(n!=0);
	printf("\nSo dao nguoc la %I64d",x);
}
