#include <stdio.h>
struct manusia {
	char nama[100];
	int umur;
};

struct siswa {
	char kelas[20];
	int no_absen;
	struct manusia orang;
};

int main(void){
struct siswa kenny = {"XII", 1, {"kenny", 21}};

printf("Nama Siswa \t: %s\n",kenny.orang.nama);
printf("Umur \t\t: %d\n", kenny.orang.umur);
printf("Kelas \t\t: %s\n", kenny.kelas);
printf("No Absen \t: %d\n", kenny.no_absen);

getchar();
return 0;
}

