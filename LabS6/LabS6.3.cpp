#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu ary[%d]: ",i);
		scanf("%d",&ary[i]);
	}
	int x,i=0;
	printf("Nhap so x: ");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(x==ary[i]){
			printf("%d co trong mang",x);
			break;
		}
	}
	if(i>=n){
		printf("%d ko co trong mang",x);
	}	
}
