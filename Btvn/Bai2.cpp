#include<stdio.h>
#include<math.h>
int main(){
	int Tien_goc=5000;
	float Lai_suat=0.08;
	int so_nam=3;
	float Tong_tien = Tien_goc*pow(1+Lai_suat,so_nam);
	printf("Tong so tien sau 3 nam nguoi do gui ngan hang la : %f",Tong_tien);
	
}
