#include <stdio.h>
int main(){
	int a,b,p,q;
	printf("Nhap thang: ");
	scanf("%d",&a);
	printf("Nhap ngay: ");
	scanf("%d",&b);
		
	if (a < 0 and b < 0){
		printf("Khong phai ngay thang");
	}else{
		if (a == 1 and b <= 31){
			p = b;
			printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);	
		}else{
			if (a == 2 and b <= 28){
				p = (31 + b);
				printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
			}else{
				if (a == 3 and b <= 31){
					p = (31+28+b);
					printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);	
				}else{
					if (a == 4 and b <= 30){
						p = ((31*2)+28+b);
						printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
					}else{
						if (a == 5 and b <= 31){
							p = ((31*2)+28+30+b);
							printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
						}else{
							if (a == 6 and b <= 30){
								p = ((31*3)+28+30+b);
								printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
							}else{
								if (a == 7 and b <= 31){
									p = ((31*3)+(30*2)+28+b);
									printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
								}else{
									if (a == 8 and b <= 31){
										p = ((31*4)+(30*2)+28+b);
										printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);	
									}else{
										if (a == 9 and b <= 30){
											p = ((31*5)+(30*2)+28+b);
											printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
										}else{
											if (a == 10 and b <= 31){
												p = ((31*5)+(30*3)+28+b);
												printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
											}else{
												if (a == 11 and b <= 30){
													p = ((31*6)+(30*3)+28+b);
													printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
												}else{
													if (a == 12 and b <= 31){
														p = ((31*6)+(30*4)+28+b);
														printf("Ngay %d thang %d la ngay thu %d trong nam ",b,a,p);
													}else{
														printf("Khong phai ngay thang");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	q = ((p-1) % 7);
	if (q == 0){
		printf("va la thu hai");
	}else{
		if (q == 1){
			printf("va la thu ba");
		}else{
			if (q == 2){
				printf("va la thu tu");
			}else{
				if (q == 3){
					printf("va la thu nam");
				}else{
					if (q == 4){
						printf("va la thu sau");
					}else{
						if (q == 5){
							printf("va la thu bay");
						}else{
							if (q == 6){
								printf("va la chu nhat");
								}else{
								}
							}
						}
					}
				}
			}
		}
	}
