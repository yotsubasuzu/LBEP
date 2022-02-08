#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	
//	if(a<b){
		for(int i=a;i>=1;i--){
			if(a%i==0 && b%i==0){
				printf("Uoc chung lon nhat cua %d va %d la %d",a,b,i);
				break;
			}
		}
//	}else{
//		for(int i=b;i>=1;i--){
//			if(a%i==0 && b%i==0){
//				printf("Uoc chung lon nhat cua %d va %d la %d",a,b,i);
//				break;
//			}
//		}
//	}
}
