#include<stdio.h>
int main(){
	int a;
	printf("nhap so a = ");
	scanf("%d",&a);
	int b;
	printf("nhap so b = ");
	scanf("%d",&b);
	int c;
	printf("Nhap so c = ");
	scanf("%d",&c);
	if (a>b){
		if(a>c){
			printf("so lon nhat la %d",a);
		}
		else{
		}
	}
	else{
		if(b>c){
			printf("so lon nhat la %d",b);
		}
		else{
			printf("so lon nhat la %d",c);
		}
	}
}
			

