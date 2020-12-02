#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);	
	
	if(n < 2){
		printf("n ko phai so nguyen to");
	}else{
		int s = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				s++;
			}
		}
		if (s == 0){
			printf("n la so nguyen to");
		}else{
			printf("n ko phai 0la so nguyen to");
		}
	}
}
