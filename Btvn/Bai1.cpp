#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("Nhap so a =");
	scanf("%d",&a);
	int b;
	printf("Nhap so b =");
	scanf("%d",&b);
	int c;
	printf("Nhap so c =");-
	scanf("%d",&c);
	if(a!=0){
		float denta=pow(b,2)-4*a*c;
		if(denta<0){
			printf("Pt vo nghiem");
		}
		else{
			if(denta==0){
				printf("Phuong trinh co nghiem kep = %f",-(float)b/(2*a));
			}
			else{
				printf("Pt co 2 nghiem phan biet la %f,%f",-(float)b+sqrt(denta)/(2*a),-(float)b-sqrt(denta)/(2*a));
			}
		}
	}
	else{
		if(b==0 && c==0){
			printf("PT vo so nghiem");
		}
		else{
			printf("pt co 1 nghiem duy nhat la %f",-(float)c/b);
		}
	}
}
