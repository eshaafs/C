#include <stdio.h>

struct alamat{
	char namaJalan[50], nomorRumah[5], kota[30], provinsi[30];
};

struct tanggalLahir{
	char bulan[15];
	int tanggal, tahun;
};

struct dosen{
	int noDosen, NIDN;
	char nama[50], tempatLahir[30];
	struct alamat alamatDosen[5];
	struct tanggalLahir ttlDosen[5];
};

int main(){
	printf("====================================================\n");
	printf("\t     PROGRAM INPUT DATA DOSEN\n");
	printf("\t       Team Assignment - 3\n");
	printf("copyright © 2020 Team 2 Member(s) all right reserved\n");
	printf("====================================================\n\n");
	
	struct dosen dataDosen[5];
	int i;
	for(i = 0; i < 5; i++){
		printf("Masukkan data Dosen ke-%d:\n", i+1);
		printf("No. Dosen\t\t: ");
		scanf("%d", &dataDosen[i].noDosen);
		fflush(stdin);
		printf("NIDN\t\t\t: ");
		scanf("%d", &dataDosen[i].NIDN);
		fflush(stdin);
		printf("Nama\t\t\t: ");
		scanf("%[^\n]", dataDosen[i].nama);
		fflush(stdin);
		printf("Alamat : \n");
		printf("  - Nama Jalan\t\t: ");
		scanf("%[^\n]", dataDosen[i].alamatDosen[i].namaJalan);
		fflush(stdin);
		printf("  - Nomor Rumah\t\t: ");
		scanf("%s", dataDosen[i].alamatDosen[i].nomorRumah);
		fflush(stdin);
		printf("  - Kota\t\t: ");
		scanf("%[^\n]", dataDosen[i].alamatDosen[i].kota);
		fflush(stdin);
		printf("  - Provinsi\t\t: ");
		scanf("%[^\n]", dataDosen[i].alamatDosen[i].provinsi);
		fflush(stdin);
		printf("Tempat Lahir\t\t: ");
		scanf("%[^\n]", dataDosen[i].tempatLahir);
		fflush(stdin);
		printf("Tgl, Bln, dan Thn Lahir : ");
		scanf("%d %s %d", &dataDosen[i].ttlDosen[i].tanggal, dataDosen[i].ttlDosen[i].bulan, &dataDosen[i].ttlDosen[i].tahun);
		fflush(stdin);
		printf("\n==================================================\n\n");
	}
	
	char tampil;
	do{
		printf("Tampilkan data dosen? (y/n) ");
		scanf("%c", &tampil);
		fflush(stdin);
		int nidntmp;
		if(tampil == 'y'){
			printf("Masukkan NIDN: ");
			scanf("%d", &nidntmp);
			fflush(stdin);
			for(i = 0; i < 5; i++){
				if(dataDosen[i].NIDN == nidntmp){
					printf("No. Dosen\t\t: %d\n", dataDosen[i].noDosen);
					printf("NIDN\t\t\t: %d\n", dataDosen[i].NIDN);
					printf("Nama\t\t\t: %s\n", dataDosen[i].nama);
					printf("Alamat : \n");
					printf("  - Nama Jalan\t\t: %s\n", dataDosen[i].alamatDosen[i].namaJalan);
					printf("  - Nomor Rumah\t\t: %s\n", dataDosen[i].alamatDosen[i].nomorRumah);
					printf("  - Kota\t\t: %s\n", dataDosen[i].alamatDosen[i].kota);
					printf("  - Provinsi\t\t: %s\n", dataDosen[i].alamatDosen[i].provinsi);
					printf("Tempat Lahir\t\t: %s\n", dataDosen[i].tempatLahir);
					printf("Tgl, Bln, dan Thn Lahir : %d %s %d\n\n", dataDosen[i].ttlDosen[i].tanggal, dataDosen[i].ttlDosen[i].bulan, dataDosen[i].ttlDosen[i].tahun);
					break;
				}
			}
		} 
	} while(tampil == 'y');
return 0;
}
