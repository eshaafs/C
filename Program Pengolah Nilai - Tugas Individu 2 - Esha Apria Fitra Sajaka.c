#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct dataMahasiswa{
	char nim[20], nama[50], matkul[30];
};

struct nilai{
	unsigned nilaiHadir, nilaiTugas, nilaiKuis, nilaiKeaktifanForum, nilaiUAS;
};

void banner(){
	printf("-------------------------------------------------\n");
	printf("|\t\t\t\t\t\t|\n");
	printf("|\tAplikasi Pengolah Nilai Mahasiswa\t|\n");
	printf("|\t  Oleh: Esha Apria Fitra Sajaka\t\t|\n");
	printf("|\t\t\t\t\t\t|\n");
	printf("-------------------------------------------------\n\n");
}

unsigned pilih;
int menu(){
	system("cls");
	banner();
	printf("Menu : \n");
	printf("1. Input Data Mahasiswa\n");
	printf("2. Input Nilai\n");
	printf("3. Lihat Nilai Mahasiswa dan Status\n");
	printf("4. Keluar\n\n");
	printf("Silakan Masukkan Pilihan Anda (1-4): ");
	scanf("%d", &pilih);
	fflush(stdin);
	while(pilih > 4){
		printf("Menu yang anda pilih tidak tersedia!\n");
		printf("Silakan Masukkan Kembali Pilihan Anda (1-4): ");
		scanf("%d", &pilih);
		fflush(stdin);
	}
	return pilih;
}

void returnMenu(){
	int pilihan;
	printf("\nTekan 1 untuk kembali ke menu utama: ");
	scanf("%d", &pilihan);
	while(pilihan != 1){
		printf("\nAngka yang anda Masukkan salah!\nTekan 1 untuk kembali ke menu utama: ");
		scanf("%d", &pilihan);
	}
	if(pilihan == 1) {
		printf("\n\n");
		menu();
	} 
}

int main(){
	//DEKLARASI VARIABLE
	unsigned nilaiAkhir;
	char NIM[20];
	struct dataMahasiswa dataMHS, cmp;
	struct nilai nilaiMHS = {0, 0, 0, 0, 0};
		
	//MENAMPILKAN MENU UTAMA
	menu();
	
	while(pilih <= 4){
		//1. INPUT DATA MAHASISWA
		if(pilih == 1){
			system("cls");
			banner();						
			printf("Input Data Mahasiswa:\n");
			cmp = dataMHS;
			printf("1. NIM\t\t: ");
			scanf("%[^\n]s", dataMHS.nim);
			fflush(stdin);
			while(strcmp(cmp.nim,dataMHS.nim) == 0){
				printf("*NIM tersebut sudah pernah dimasukkan, silakan masukkan NIM lain!\n");
				printf("\t\t: ");
				scanf("%[^\n]s", dataMHS.nim);
				fflush(stdin);
			}
			
			printf("2. Nama\t\t: ");
			scanf("%[^\n]s", dataMHS.nama);
			fflush(stdin);
			while(strcmp(cmp.nama,dataMHS.nama) == 0){
				printf("*Nama tersebut sudah pernah dimasukkan, silakan masukkan Nama lain!\n");
				printf("\t\t: ");
				scanf("%[^\n]s", dataMHS.nama);
				fflush(stdin);
			}
			
			printf("3. Mata Kuliah\t: ");
			scanf("%[^\n]s", dataMHS.matkul);
			fflush(stdin);
			/*while(strcmp(cmp.matkul,dataMHS.matkul) == 0){
				printf("*Mata Kuliah tersebut sudah pernah dimasukkan, silakan masukkan Mata Kuliah lain!\n");
				printf("\t\t: ");
				scanf("%[^\n]s", dataMHS.matkul);
				fflush(stdin);
			}*/
			
			returnMenu();
		}
		
		//2. INPUT NILAI MAHASISWA
		else if(pilih == 2){
			system("cls");
			banner();
			printf("Input Nilai Mahasiswa (0-100): \n");
			printf("1. Nilai Hadir \t\t: ");
			scanf("%d", &nilaiMHS.nilaiHadir);
			fflush(stdin);
			printf("2. Nilai Tugas \t\t: ");
			scanf("%d", &nilaiMHS.nilaiTugas);
			fflush(stdin);
			printf("3. Nilai Kuis \t\t: ");
			scanf("%d", &nilaiMHS.nilaiKuis);
			fflush(stdin);
			printf("4. Nilai Keatifan Forum : ");
			scanf("%d", &nilaiMHS.nilaiKeaktifanForum);
			fflush(stdin);
			printf("5. Nilai UAS \t\t: ");
			scanf("%d", &nilaiMHS.nilaiUAS);
			fflush(stdin);
			returnMenu();
		}
		
		//3. MENAMPILKAN NILAI
		else if(pilih == 3){
			system("cls");
			banner();
			printf("Masukkan NIM Mahasiswa: ");
			scanf("%[^\n]s", NIM);
			fflush(stdin);
			while(strcmp(NIM, dataMHS.nim) != 0){
				printf("Maaf NIM yang anda masukkan salah!\n");
				printf("Masukkan Kembali NIM Mahasiswa: ");
				scanf("%[^\n]s", NIM);
				fflush(stdin);
			} 
			printf("\nData Mahasiswa: \n");
			printf("NIM \t\t: %s\n", dataMHS.nim);
			printf("Nama \t\t: %s\n", dataMHS.nama);
			printf("Mata Kuliah \t: %s\n\n", dataMHS.matkul);
			printf("Nilai Mahasiswa: \n");
			printf("Nilai Hadir \t\t: %d\n", nilaiMHS.nilaiHadir);
			printf("Nilai Tugas \t\t: %d\n", nilaiMHS.nilaiTugas);
			printf("Nilai Kuis \t\t: %d\n", nilaiMHS.nilaiKuis);
			printf("Nilai Keaktifan Forum \t: %d\n", nilaiMHS.nilaiKeaktifanForum);
			printf("Nilai UAS \t\t: %d\n", nilaiMHS.nilaiUAS);
			printf("-------------------------------------\n");
			nilaiAkhir = (nilaiMHS.nilaiHadir * 0.1) + (nilaiMHS.nilaiTugas * 0.2) + (nilaiMHS.nilaiKuis * 0.1) + (nilaiMHS.nilaiKeaktifanForum * 0.1) + (nilaiMHS.nilaiUAS * 0.5);
			printf("Nilai Akhir \t\t: %d\n\n", nilaiAkhir);
			if(nilaiAkhir >= 90 && nilaiAkhir <= 100){
				printf("Selamat anda LULUS dengan Grade A\n");
			} else if (nilaiAkhir >= 80 && nilaiAkhir <= 89){
				printf("Selamat anda LULUS dengan Grade B\n");
			} else if (nilaiAkhir >= 70 && nilaiAkhir <= 79){
				printf("Selamat anda LULUS dengan Grade C\n");
			} else if (nilaiAkhir >= 60 && nilaiAkhir <= 69){
				printf("Selamat anda LULUS dengan Grade D\n");
			} else {
				printf("Maaf anda TIDAK LULUS dengan Grade E\n");
			}			
			returnMenu();
		}
		
		//4. EXIT
		else if(pilih == 4){
			printf("\nAnda keluar dari Program!\n");
			printf("Terimakasih");
			exit(0);
		}
	}
return 0;
}
