#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	do{
	
		printf("Nhap 1 so:");
		scanf("%d",&a);
		printf("Nhap 1 so:");
		scanf("%d",&b);
		printf("Nhap 1 so:");
		scanf("%d",&c);
	}while(!(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0));
		printf("\nDay la 3 canh tam giac");
	int p=a+b+c;
	float p2=(float)p/2;
	float s=sqrt(p2*(p-a)*(p-b)*(p-c));
	printf("\nChu vi: %d va Dien tich: %f",p,s);
}
