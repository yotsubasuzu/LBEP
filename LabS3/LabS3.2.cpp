#include <stdio.h>
int main(){
	float a = 4000;
	char c = 37;
	printf("So tien ban dau la $4000\n");
	
	a = (a*1.08);
	a = (a*1.08);
	a = (a*1.08);
	a = (a*1.08);
		
	printf("So tien sau 4 nam gui ngan hang voi lai suat 8%c/nam la: $%f",c,a);
}
