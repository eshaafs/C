#include<stdio.h>
struct alamat{
	char jalan[30], kota[30], provinsi[30];
};
struct dataDiri{
	char nama[30];
	int umur;
	struct alamat almt;
};

int main(){
	struct dataDiri siswa;
	printf("Masukkan data diri anda!\n");
	printf("Nama: ");
	gets(siswa.nama);
	printf("Umur: ");
	scanf("%d", &siswa.umur);
	printf("Alamat: \n");
	printf("\tJalan: ");
	gets(siswa.almt.jalan);
	printf("\tKota: ");
	gets(siswa.almt.kota);
	printf("\tProvinsi: ");
	gets(siswa.almt.provinsi);
	printf("\nData yang anda masukkan adalah:\n");
	printf("Nama: %s\n", siswa.nama);
	printf("Umur: %d\n", siswa.umur);
	printf("Alamat:\n");
	printf("\tJalan: %s\n", siswa.almt.jalan);
	printf("\tKota: %s\n", siswa.almt.kota);
	printf("\tProvinsi: %s\n", siswa.almt.provinsi);
return 0;
}
