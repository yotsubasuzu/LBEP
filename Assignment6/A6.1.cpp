#include <stdio.h>
bool search(int a[],int n,int x){
	int low=0,high=n-1;
	for(;low<=high;){
		int mid = (low+high)/2;
		if(a[mid]==x){
			return true;	
		}else if(x>a[mid]){
			low = mid+1;
		}else{
			high = mid-1;
		}
	}
	return false;
}
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap so a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("Nhap so can tim: ");
	scanf("%d",&x);
	
	bool s=search(a,n,x);
	if(s){
		printf("So can tim co trong mang");
	}else{
		printf("So can tim ko co trong mang");
	}
}
