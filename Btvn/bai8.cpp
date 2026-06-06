#include<stdio.h>
int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	int a[n];
	int x;
	printf("nhap x =");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		printf("nhap so phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]==x){
			printf("%d co trong mang o vi tri thu %d ",x,i);
			break;
		}
}
}
