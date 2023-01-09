#include<stdio.h>
int main(){
  printf("========================================\n");
  printf("\tPenghitungan Biaya Pemakaian Air \n");
  printf("\tOleh: Esha A.F. Sajaka\n");
  printf("========================================\n\n\n");
	int pemakaianAir = 0, biaya=0;
	printf("Masukkan banyaknya pemakaian air: ");
	scanf("%d", &pemakaianAir);
  printf("\n");
	if(pemakaianAir > 0 && pemakaianAir <= 20){
		biaya = pemakaianAir * 10000;
	} else if (pemakaianAir > 0 && pemakaianAir <= 20 && pemakaianAir <= 50){
		biaya = (20 * 10000) + ((pemakaianAir - 20) * 15000);
	} else if (pemakaianAir > 50) {
		biaya = (20 * 10000) + (50 * 15000) + ((pemakaianAir - 70) * 20000);
	} else biaya;
	printf("\n================= HASIL ================\n\n");
	printf("Biaya pemakaian air anda adalah: %d\n", biaya);
	getchar();
	return 0;
}
