#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n:");
	scanf("%d",&n);
	
	if(n<=0){
		printf("khong tim duoc so nao");
	}else if(n==1){
		printf("So tiem can %d trong day Fibonacci la %d",n,0);
	}else{
		int x=0,y=1,z=1;
		for(int i=3;y+z<n;i++){
			x=y;
			y=z;
			z=x+y;
			}
			printf("So tiem can %d trong day Fibonacci la %d",n,z);
	}
}
