#include<stdio.h>
int main(){
	int a;
	printf("nhap so a =");
	scanf("%d",&a);
	int b;
	printf("nhap so b =");
	scanf("%d",&b);
	if(a!=0){
	
		printf("Phuong trinh ax+b=0 co 1 nghiem duy nhat = %f",-(float)b/a);
	}
	else{
		if(b==0){
			printf("phuong trinh vo so nghiem");
		}
		else{
			printf("phuong trinh vo nghiem");
		}
	}
}
