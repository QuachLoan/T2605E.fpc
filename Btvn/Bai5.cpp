#include<stdio.h>
int main(){
	int a;
	printf("nhap so a = ");
	scanf("%d",&a);
	int b;
	printf("nhap so  = ");
	scanf("%d",&b);
	int BCNN;
	int bcnn=a*b;
	while(a*b!=0){
		if(a>b){
			a=a%b;

		}
		else{
			b=b%a;
		}
	}
	a=b;
	printf("UCLn Cua a va b la: %d\n",a);
	BCNN=bcnn/a;
	printf("BCNN Cua a va b la: %d",BCNN);
}
