#include<stdio.h>
int main(){
	int i;
	int so_dao_nguoc = 0;
	printf("nhap so bat ki : ");
	scanf("%d",&i);
	while(i!=0){
		int so_du= i%10;
		so_dao_nguoc= so_dao_nguoc*10 + so_du;
		i=i/10;
	}
	printf("so dao nguoc la : %d",so_dao_nguoc);

}
