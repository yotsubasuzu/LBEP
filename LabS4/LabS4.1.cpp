#include <stdio.h>
int main(){
	int n,x=1;
	printf("Nhap 1 so n=");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		x *= i;
	}
	
//	int i=1;
//	do{
//		x = x*i;
//		i++;
//	}while(i<=n);

	printf("%d! = %d",n,x);
}
