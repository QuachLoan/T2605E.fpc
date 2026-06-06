#include<stdio.h>
int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}
	int tong=0;
	int count=0;
	float tb=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			count++;
			tong=tong+a[i];
		}
	}
	printf("tong %d\n",tong);
	printf("count %d\n",count);
	tb=(float)tong/count;
	printf("trung binh cong cac so le trong mang la :%f ",tb);
}

