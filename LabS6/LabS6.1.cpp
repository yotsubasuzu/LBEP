#include <stdio.h>
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	
	int ary[n];
	
	for(int i=0;i<n;i++){
		printf("Nhap phan tu ary[%d]: ",i);
		scanf("%d",&ary[i]);

//		if(ary[i]%2!=0){
//			k++;
//			s=(s+ary[i]);
//		}
	}
	int s=0,k=0;
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
		k++;
		s+=s+ary[i];
		}
	}
	s=s/(float)k;
	if(k!=0){
		printf("Trung binh cong cua cac so le la: %f",s);
	}else{
		printf("Mang ko co so le")
	}
//	printf("\nso K= %d",k);
}
