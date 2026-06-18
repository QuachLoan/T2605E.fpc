#include<stdio.h>
int main(){
	int num;
	printf("nhap num = ");
	scanf("%d",&num);
	float sum=0;
	for(int i=1;i<=num;i++){
		sum= sum +1.0/i;
	}
	if(sum<=0){
		printf("error");
	}else{		
		printf("Sum = %f",sum);
	}
}
