#include <stdio.h>
#include <math.h>
bool ktTamgiac(int a,int b,int c){
	return a>0 && b>0 && c>0 && a+b>c && b+c>a && c+a>b;
}
float tinhDientich(int a,int b,int c){
	if(ktTamgiac){
		float p=(float)(a+b+c)/2;
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		return s;
	}
	return 0;
}

int main(){
	int a,b,c;
	printf("Nhap 3 canh tam giac: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	bool kttg = ktTamgiac(a,b,c);
	if(kttg){
		printf("Day la 3 canh cua tam giac");
		printf("\nDien tich cua tam giac la: %f",tinhDientich(a,b,c));
	}else{
		printf("Day khong phai 3 canh cua tam giac");
	}
}
