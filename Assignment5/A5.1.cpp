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
			s1+=a[i][j];
		}
	}
	int s2=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap so b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
			s2+=b[i][j];
		}
	}
	
	int s=s1+s2;
	printf("Tong hai ma tran la: %d",s);
}
