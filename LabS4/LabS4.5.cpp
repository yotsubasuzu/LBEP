#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);	
	
	if(n < 2){
		printf("%d ko phai so nguyen to",n);
	}else{
		int k=0;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				k++;
				break; //thoat vong lap
			}
		}
		if (k == 0){
			printf("%d la so nguyen to",n);
		}else{
			printf("%d ko phai so nguyen to",n);
		}
	}
}
