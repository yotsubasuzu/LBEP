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
	int s1=0;
	for(int i=0;i<n;i++){
		s1=(s1+a[i][i]);
	}
	
	int s2=0;
	for(int i=0;i<n;i++){
		s2+=a[i][n-1-i];
	}
	
	
	printf("Ma tran: \n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
	float tbc1=s1/(float)n;
	float tbc2=s2/(float)n;
	printf("Trung binh cong duong cheo 1 la: %f\n",tbc1);
	printf("Trung binh cong duong cheo 2 la: %f",tbc2);	
}
	
