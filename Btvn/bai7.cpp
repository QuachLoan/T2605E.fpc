#include<stdio.h>
int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	int a[n];
	for (int i =0;i<n;i++){
		printf("nhap phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}
	int tong=0;
	for(int i=0;i<n;i+=2){
		if(a[i]%2!=0){
			tong=tong+a[i];
		}
	}
	printf("tong so le o vi tri chan la %d",tong);
}
