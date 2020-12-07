#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	
	if(a<b){
		for(int i=b;i<=a*b;i++){
			if(i%a==0&&i%b==0){
				printf("Boi chung nho nhat cua %d va %d la %d",a,b,i);
				break;			
			}
		}
	}else{
		for(int i=a;i<=a*b;i++){
			if(i%a==0&&i%b==0){
				printf("Boi chung nho nhat cua %d va %d la %d",a,b,i);
				break;			
			}
		}
	}
}
