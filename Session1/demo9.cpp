#include<stdio.h>
int main (){
	int age;
	printf("nhap so tuoi =");
	scanf("%d",&age);
	if(age<6){
		printf("tre em");
	}
	else{
		if(age<17){
			printf("hoc sinh");
		}
		else{
			if(age<21){
				printf("sinh vien");
			}
			else{
				printf("nguoi lon");
			}
		}
	}
}
