#include<stdio.h>
int main(){
	int num;
	printf("Nhap gia tri bat ki:");
	scanf("%d",&num);
	int r;
	r = num%2;
	if(r==0){
		printf("so chia het cho 2");	
	}
	else{
		printf("khong chia het cho 2");
	}
}

