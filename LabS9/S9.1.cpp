#include <stdio.h>

bool ktsnt(int a){
	if(a<2) return false;
	if(a==2) return true;
	for(int i=2;i<=a/2;i++){
		if(a%i==0) return false;
	}
	return true;
}

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	if(n<2){
		printf("So nguyen to can tren la: 2");
	}else{
		for(int i=n+1;;i++){
		if(ktsnt(i)){
			printf("So nguyen to can tren la: %5d\n",i);
			break;
			}
		}
	}
}
