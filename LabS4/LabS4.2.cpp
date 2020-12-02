#include <stdio.h>
int main(){
	float s=0;
	for(int i=1;i <= 1000;i++){
		s = s + (1/(float)i);
	}
	printf("Tong S= %f",s);
}
