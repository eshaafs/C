#include <stdio.h>
#include <string.h>

int main(){
	printf("====================================================\n");
	printf("\t     PROGRAM BINTANG KELAHIRAN\n");
	printf("\t       Team Assignment - 3\n");
	printf("copyright © 2020 Team 2 Member(s) all right reserved\n");
	printf("====================================================\n\n");
	
	char nama[50], bulan[15], bintang[10];
	int tanggal;
	printf("Masukkan Nama \t\t: ");
	scanf("%[^\n]", nama);
	fflush(stdin);
	printf("Masukkan Tanggal Lahir \t: ");
	scanf("%d %s", &tanggal, bulan);
	fflush(stdin);
	if((tanggal >= 21 && tanggal <= 31) && ((strcmp(bulan,"maret") == 0) || (strcmp(bulan,"Maret") == 0))) strcpy(bintang,"Aries");
	else if ((tanggal >= 1 && tanggal <= 19) && ((strcmp(bulan,"april") == 0) || (strcmp(bulan,"April") == 0))) strcpy(bintang,"Aries");
	else if ((tanggal >= 20 && tanggal <= 30) && ((strcmp(bulan,"april") == 0) || (strcmp(bulan,"April") == 0))) strcpy(bintang,"Taurus");
	else if ((tanggal >= 1 && tanggal <= 20) && ((strcmp(bulan,"mei") == 0) || (strcmp(bulan,"Mei") == 0))) strcpy(bintang,"Taurus");
	else if ((tanggal >= 21 && tanggal <= 31) && ((strcmp(bulan,"mei") == 0) || (strcmp(bulan,"Mei") == 0))) strcpy(bintang,"Gemini");
	else if ((tanggal >= 1 && tanggal <= 20) && ((strcmp(bulan,"juni") == 0) || (strcmp(bulan,"Juni") == 0))) strcpy(bintang,"Gemini");
	else if ((tanggal >= 21 && tanggal <= 30) && ((strcmp(bulan,"juni") == 0) || (strcmp(bulan,"Juni") == 0))) strcpy(bintang,"Cancer");
	else if ((tanggal >= 1 && tanggal <= 22) && ((strcmp(bulan,"juli") == 0) || (strcmp(bulan,"Juli") == 0))) strcpy(bintang,"Cancer");
	else if ((tanggal >= 23 && tanggal <= 31) && ((strcmp(bulan,"juli") == 0) || (strcmp(bulan,"Juli") == 0))) strcpy(bintang,"Leo");
	else if ((tanggal >= 1 && tanggal <= 22) && ((strcmp(bulan,"agustus") == 0) || (strcmp(bulan,"Agustus") == 0))) strcpy(bintang,"Leo");
	else if ((tanggal >= 23 && tanggal <= 31) && ((strcmp(bulan,"agustus") == 0) || (strcmp(bulan,"Agustus") == 0))) strcpy(bintang,"Virgo");
	else if ((tanggal >= 1 && tanggal <= 22) && ((strcmp(bulan,"september") == 0) || (strcmp(bulan,"September") == 0))) strcpy(bintang,"Virgo");
	else if ((tanggal >= 23 && tanggal <= 30) && ((strcmp(bulan,"september") == 0) || (strcmp(bulan,"September") == 0))) strcpy(bintang,"Libra");
	else if ((tanggal >= 1 && tanggal <= 22) && ((strcmp(bulan,"oktober") == 0) || (strcmp(bulan,"Oktober") == 0))) strcpy(bintang,"Libra");
	else if ((tanggal >= 23 && tanggal <= 31) && ((strcmp(bulan,"oktober") == 0) || (strcmp(bulan,"Oktober") == 0))) strcpy(bintang,"Scorpio");
	else if ((tanggal >= 1 && tanggal <= 21) && ((strcmp(bulan,"november") == 0) || (strcmp(bulan,"November") == 0))) strcpy(bintang,"Scorpio");
	else if ((tanggal >= 22 && tanggal <= 30) && ((strcmp(bulan,"november") == 0) || (strcmp(bulan,"November") == 0))) strcpy(bintang,"Sagitarius");
	else if ((tanggal >= 1 && tanggal <= 21) && ((strcmp(bulan,"desember") == 0) || (strcmp(bulan,"Desember") == 0))) strcpy(bintang,"Sagitarius");
	else if ((tanggal >= 22 && tanggal <= 31) && ((strcmp(bulan,"desember") == 0) || (strcmp(bulan,"Desember") == 0))) strcpy(bintang,"Capricorn");
	else if ((tanggal >= 1 && tanggal <= 19) && ((strcmp(bulan,"januari") == 0) || (strcmp(bulan,"Januari") == 0))) strcpy(bintang,"Capricorn");
	else if ((tanggal >= 20 && tanggal <= 31) && ((strcmp(bulan,"januari") == 0) || (strcmp(bulan,"Januari") == 0))) strcpy(bintang,"Aquarius");
	else if ((tanggal >= 1 && tanggal <= 18) && ((strcmp(bulan,"februari") == 0) || (strcmp(bulan,"Februari") == 0))) strcpy(bintang,"Aquarius");
	else if ((tanggal >= 19 && tanggal <= 29) && ((strcmp(bulan,"februari") == 0) || (strcmp(bulan,"Februari") == 0))) strcpy(bintang,"Pisces");
	else if ((tanggal >= 1 && tanggal <= 20) && ((strcmp(bulan,"maret") == 0) || (strcmp(bulan,"Maret") == 0))) strcpy(bintang,"Pisces");
	else strcpy(bintang,"Tanggal Lahir yang anda masukkan salah!");
	printf("\n=========================================\n\n");
	printf("Nama\t\t: %s\n", nama);
	printf("Bintang\t\t: %s\n", bintang);
	printf("Tanggal Lahir\t: %d %s\n", tanggal, bulan);
return 0;
}
