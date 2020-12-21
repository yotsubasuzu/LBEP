#include <stdio.h>
int UCLN(int a,int b){
	for(int i=a;i>=1;i--){
		if(a%i==0 && b%i==0){
			printf("%5d",i);
			return i;
		}
	}
}

int BCNN(int a,int b){
	for(int i=a;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			printf("%5d",i);
			return i;
		}
	}
}

int main(){
	int a,b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	
	printf("UCLN va BCNN cua %d va %d la: ",a,b);
	UCLN(a,b);
	BCNN(a,b);
}
