#include <stdio.h>
int main(){
	int s = 0;
//	for(int i=1;i<200;i+=2){
//		s += i;
//	}
	for(int i=0,j=0;i<100;j++){
		if(j%2!=0){
			s+=j;
			i++;
		}
	}
	printf("Tong 100 so le dau tien >0: %d",s);
}
