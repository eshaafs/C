#include<stdio.h>
int main(){
	int jam;
	float biaya;
	
	printf("=====================================================\n");
	printf("PROGRAM PERHITUNGAN BILLING GAME ONLINE\n");
	printf("Team Assignment - 2\n");
	printf("copyright © 2020 Team 2 Member(s) all right reserved\n");
	printf("=====================================================\n\n");
	
	//input user
	printf("Silakan masukkan berapa jam anda akan bermain: ");
	scanf("%d", &jam);
	if(jam > 0 && jam < 5){
		biaya = jam * 2000;
	} else if (jam > 5) {
		biaya = (jam * 2000) - (jam * 2000 * 0.2);
	} else biaya = 0;
	
	//menampilkan jumlah tagihan billing
	printf("\n-------------------------------------------------\n");
	printf("Anda bermain selama %d game dengan biaya: %.0f\n", jam, biaya);
	getchar();
return 0;
}
