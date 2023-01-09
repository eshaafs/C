#include<stdio.h>

int main(){
union luasKeliling{ 
		int luas;
		float keliling;
} LK;

int p = 4, l = 2;
LK.luas = p * l;
printf("Luas Persegi Panjang: %d\n", LK.luas);
LK.keliling = 2 * (p + l);
printf("Keliling Persegi Panjang: %.1f", LK.keliling);
}
