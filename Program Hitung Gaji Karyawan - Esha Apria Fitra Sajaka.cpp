/******************************
 PROGRAM HITUNG GAJI KARYAWAN
  By: Esha Apria Fitra Sajaka
*******************************/

#include<stdio.h>
#include<string.h>

int main(){
	/* Deklarasi Variabel */
	char namaKaryawan[30], pendidikan[3];
	int gaji, golongan, tunjanganJabatan, tunjanganPendidikan, jamKerja, lembur;
	int gajiPerBulan = 2000000;
	

	/* Input user */
	printf("PROGRAM HITUNG GAJI KARYAWAN \n");
	puts("oleh: Esha A.F. Sajaka");
	printf("=============================================\n\n");
	printf("Nama Karyawan: ");
//	scanf("%[^\n]", &namaKaryawan);
	gets(namaKaryawan);
	fflush(stdin);
	printf("Golongan Jabatan (input 1, 2 atau 3): ");
	scanf("%d", &golongan);	
	fflush(stdin);
	printf("Pendidikan (input SMA, D3 atau S1): ");
	scanf("%s", &pendidikan);
	fflush(stdin);
	printf("Jumlah jam kerja: ");
	scanf("%d", &jamKerja);
	fflush(stdin);


	/* Penghitungan tunjanganJabatan */
	if(golongan == 1){
		tunjanganJabatan = gajiPerBulan * 0.05;
	} if(golongan == 2) {
		tunjanganJabatan = gajiPerBulan * 0.1;
	} if(golongan == 3){
		tunjanganJabatan = gajiPerBulan * 0.15;
	} else tunjanganJabatan = 0;

	/* Penghitungan tunjanganPendidikan */
	if(strcmp(pendidikan, "SMA") == 0){
		tunjanganPendidikan = gajiPerBulan * 0.025;
	} if(strcmp(pendidikan, "D3") == 0){
		tunjanganPendidikan = gajiPerBulan * 0.05;
	} if(strcmp(pendidikan, "S1") == 0){
		tunjanganPendidikan = gajiPerBulan * 0.1;
	} else tunjanganPendidikan = 0;

	/* Penghitungan lembur */
	if(jamKerja > 8){
		lembur = (jamKerja - 8) * 3000;
	} else if (jamKerja < 0) {
		lembur = 0;
	} else lembur = 0;
	
	/* Penghitungan Total Gaji */
	gaji = gajiPerBulan + tunjanganJabatan + tunjanganPendidikan + lembur;

	printf("\n=================== HASIL ===================\n\n");
	printf("Nama Karyawan: %s", namaKaryawan);
	printf("\n\tTunjangan Jabatan Rp. %d", tunjanganJabatan);
	printf("\n\tTunjangan Pendidikan Rp. %d", tunjanganPendidikan);
	printf("\n\tHonor Lembur Rp. %d", lembur);
	printf("\nTotal Gaji Rp. %d", gaji);

getchar();
return 0;
}


