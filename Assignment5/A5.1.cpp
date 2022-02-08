#include <stdio.h>
int main(){
	int m,n;
	printf("Nhap so hang: ");
	scanf("%d",&m);
	printf("Nhap so cot: ");
	scanf("%d",&n);
	
	int a[m][n],b[m][n];
	int s1=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap so a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int s2=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap so b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	int c[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("Tong 2 mang la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
}
