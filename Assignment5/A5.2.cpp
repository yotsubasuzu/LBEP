#include <stdio.h>
int main(){
	int n;
	printf("Nhap so hang va cot: ");
	scanf("%d",&n);
	
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Nhap so a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int s=0;
	for(int i=0;i<n;i++){
		s=(s+a[i][i]);
	}
	
	printf("Ma tran: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
	float tbc=s/(float)n;
	printf("Trung binh cong duong cheo la: %f",tbc);
}
	
