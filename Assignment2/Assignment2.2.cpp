#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so a= ");
	scanf("%d",&a);
	printf("Nhap so b= ");
	scanf("%d",&b);
	
	if (a >= b){
		printf("a/b = %f",(float)a/b);
	}else{
		printf("a*b = %d",a*b);
	}
}
