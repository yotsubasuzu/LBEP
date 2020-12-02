#include <stdio.h>
int main(){
	int a;
	printf("Nhap so a= ");
	scanf("%d",&a);
	
	if (a == 2){
		printf("Thu 2");
	}else{
		if (a == 3){
			printf("Thu 3");
		}else{
			if (a == 4){
				printf("Thu 4");
			}else{
				if (a == 5){
					printf("Thu 5");
				}else{
					if (a == 6){
						printf("Thu 6");	
					}else{
						if (a == 7){
							printf("Thu 7");	
						}else{
							if (a == 8){
								printf("Chu nhat");	
							}else{
								printf("Khong phai ngay trong tuan");
							}
						}
					}
				}
			}
		}
	}
}
