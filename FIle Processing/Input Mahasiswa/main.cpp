#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char nim[20], nama[50];
	float ipk;
	char enter;
} datamhs[100];
int pilih, validasi;
char tmp[100];

void banner(){
	system("cls");
	printf("-------------------------------------------------\n");
	printf("|\t\t\t\t\t\t|\n");
	printf("|\tAplikasi Data IPK Mahasiswa\t\t|\n");
	printf("|\t  Oleh: Esha Apria Fitra Sajaka\t\t|\n");
	printf("|\t\t\t\t\t\t|\n");
	printf("-------------------------------------------------\n\n");
}

int menu(){

	printf("Menu:\n");
	printf("1. Input Data Mahasiswa\n");
	printf("2. Lihat Data Mahasiswa\n");
	printf("3. Update Data Mahasiswa\n");
	printf("4. Hapus Data Mahasiswa\n");
	printf("5. Keluar\n\n");
	printf("Silakan masukkan pilihan anda: ");
	scanf("%d", &pilih);
	fflush(stdin);
	while(pilih < 1 || pilih > 5){
		printf("Menu yang anda pilih tidak tersedia!\n");
		printf("Silakan masukkan kembali pilihan anda: ");
		scanf("%d", &pilih);
		fflush(stdin);
	}
	return pilih;
}

void returnMenu(){
	char kembali;
	printf("\nKembali ke menu utama? (y/n): ");
	scanf("%c", &kembali);
	if(kembali == 'y' || kembali == 'Y'){
		banner();
		menu();
	} else exit(0);
}

void inputData(){
	FILE *fp;
	fp = fopen("data.txt", "a+");
	if(fp == '\0'){
		printf("data tidak dapat dibuka!");
		exit(1);
	}
	int i = 0;
	while (!feof(fp)){
		fscanf(fp,"%[^#]s", datamhs[i].nim);
		fscanf(fp,"#%[^#]s", datamhs[i].nama);
		fscanf(fp,"#%f", &datamhs[i].ipk);
		fscanf(fp,"%c", &datamhs[i].enter);
		++i;
	}

	printf("Input Data Mahasiswa\n\n");
	printf("NIM\t: ");
	scanf("%[^\n]", tmp);
	fflush(stdin);
	for(i = 0; i < 100; i++){
		while(strcmp(tmp, datamhs[i].nim) == 0){
			printf("NIM tersebut sudah pernah dimasukkan!\n");
			printf("Masukkan kembali NIM: ");
			scanf("%[^\n]", tmp);
			fflush(stdin);			
		}
		
		if(*datamhs[i].nim == '\0'){
			strcpy(datamhs[i].nim, tmp);
			printf("Nama\t: ");
			scanf("%[^\n]", datamhs[i].nama);
			fflush(stdin);
			printf("IPK\t: ");
			scanf("%f", &datamhs[i].ipk);
			fflush(stdin);
			fprintf(fp,"%s#%s#%.2f\n", datamhs[i].nim, datamhs[i].nama, datamhs[i].ipk);
			break;
		}
	}
	fclose(fp);
}

void printData(){
	FILE *fp;
	fp = fopen("data.txt", "r");
	if(fp == '\0'){
		printf("data tidak dapat dibuka!");
		exit(1);
	}
	int i = 0;
	while (!feof(fp)){
		fscanf(fp,"%[^#]s", datamhs[i].nim);
		fscanf(fp,"#%[^#]s", datamhs[i].nama);
		fscanf(fp,"#%f", &datamhs[i].ipk);
		fscanf(fp,"%c", &datamhs[i].enter);
		++i;
	}
	printf("Lihat data mahasiswa\n\n");
	printf("Masukkan NIM: ");
	scanf("%[^\n]", tmp);
	fflush(stdin);
	for(i = 0; i < 100; i++){
		if(strcmp(tmp, datamhs[i].nim) == 0){
			printf("Nama\t: %s\n", datamhs[i].nama);	
			printf("IPK\t: %.2f\n", datamhs[i].ipk);
			validasi = 1;
			break;
		} else validasi = 0;
	}
	if(validasi == 0) printf("Data tidak ditemukan!\n\n");
	fclose(fp);
}

void updateData(){
	FILE *fp;
	fp = fopen("data.txt", "r");
	if(fp == '\0'){
		printf("data tidak dapat dibuka!");
		exit(1);
	}
	int i = 0, edit;
	char simpan;
	
	while (!feof(fp)){
		fscanf(fp,"%[^#]s", datamhs[i].nim);
		fscanf(fp,"#%[^#]s", datamhs[i].nama);
		fscanf(fp,"#%f", &datamhs[i].ipk);
		fscanf(fp,"%c", &datamhs[i].enter);
		++i;
	}
	fclose(fp);
	
	fp = fopen("data.txt", "w+");
	if(fp == '\0'){
		printf("data tidak dapat dibuka!");
		exit(1);
	}
	printf("Update data mahasiswa\n\n");
	printf("Masukkan NIM: ");
	scanf("%[^\n]", tmp);
	fflush(stdin);
	for(i = 0; i < 100; i++){
		if(strcmp(tmp, datamhs[i].nim) == 0){
			printf("1. Nama\t: %s\n", datamhs[i].nama);	
			printf("2. IPK\t: %.2f\n", datamhs[i].ipk);
			printf("\nMasukan pilihan data yang ingin diupdate (1/2): ");
			scanf("%d", &edit);
			fflush(stdin);
			while(edit < 1 || edit > 2){
				printf("Pilihan yang ada masukkan tidak tersedia!\n");
				printf("masukkan kembali pilihan anda (1/2): ");
				scanf("%d", &edit);
				fflush(stdin);
			}
			if(edit == 1){
				printf("Masukkan nama baru: ");
				scanf("%[^\n]s", datamhs[i].nama);
				fflush(stdin);
			} else {
				printf("Masukkan IPK baru: ");
				scanf("%.2f", datamhs[i].ipk);
				fflush(stdin);
			}
			
			printf("Apa anda ingin menyimpan data ? (y/n): ");
			scanf("%c", &simpan);
			fflush(stdin);
			while(simpan != 'y' && simpan != 'Y' && simpan != 'n' && simpan != 'N'){
				printf("Pilihan yang ada masukkan salah!\n");
				printf("Apa anda ingin menyimpan data ? (y/n): ");
				scanf("%c", &simpan);
				fflush(stdin);
			}
			if(simpan == 'y' || simpan == 'Y'){
				for(i = 0; i < 100; i++){
					if(*datamhs[i].nim == '\0') continue;
					fprintf(fp,"%s#%s#%.2f\n", datamhs[i].nim, datamhs[i].nama, datamhs[i].ipk);
				}
			}
			validasi = 1;
			break;
		} else validasi = 0;
	}
	if (validasi == 0) printf("Data tidak ditemukan!\n\n");
	fclose(fp);
}

void hapusData(){
	FILE *fp;
	fp = fopen("data.txt", "r");
	if(fp == '\0'){
		printf("data tidak dapat dibuka!");
		exit(1);
	}
	int i = 0;
	char simpan, hapus;
	
	while (!feof(fp)){
		fscanf(fp,"%[^#]s", datamhs[i].nim);
		fscanf(fp,"#%[^#]s", datamhs[i].nama);
		fscanf(fp,"#%f", &datamhs[i].ipk);
		fscanf(fp,"%c", &datamhs[i].enter);
		++i;
	}
	fclose(fp);
	
	fp = fopen("data.txt", "w+");
	if(fp == '\0'){
		printf("data tidak dapat dibuka!");
		exit(1);
	}
	
	printf("Hapus data mahasiswa\n\n");
	printf("Masukkan NIM: ");
	scanf("%[^\n]", tmp);
	fflush(stdin);
	for(i = 0; i < 100; i++){
		if(strcmp(tmp, datamhs[i].nim) == 0){
			printf("Nama\t: %s\n", datamhs[i].nama);	
			printf("IPK\t: %.2f\n", datamhs[i].ipk);
			printf("\nApakah anda ingin menghapus data mahasiswa tersebut? (y/n): ");
			scanf("%c", &hapus);
			fflush(stdin);
			while(hapus != 'y' && hapus != 'Y' && hapus != 'n' && hapus != 'N'){
				printf("Pilihan yang ada masukkan salah!\n");
				printf("\nApakah anda ingin menghapus data mahasiswa tersebut? (y/n): ");
				scanf("%c", &hapus);
				fflush(stdin);
			}
			char kosong[1];
			if(hapus == 'y'){
				strcpy(datamhs[i].nim,kosong);
				strcpy(datamhs[i].nama,kosong);
				datamhs[i].ipk = 0;
				datamhs[i].enter = '\0';
			}
			printf("Apa anda ingin menyimpan data ke file? (y/n): ");
			scanf("%c", &simpan);
			fflush(stdin);
			if(simpan == 'y' || simpan == 'Y'){
				for(i = 0; i < 100; i++){
					if(*datamhs[i].nim == '\0') continue;
					fprintf(fp,"%s#%s#%.2f\n", datamhs[i].nim, datamhs[i].nama, datamhs[i].ipk);
				}
			}
			validasi = 1;
			break;
		} else validasi = 0;
	}
	if (validasi == 0) printf("Data tidak ditemukan!\n\n");
	fclose(fp);
}

int main(){
	banner();
	menu();
	while(pilih < 6){
		if(pilih == 1){
		banner();
		inputData();
		returnMenu();
		}
		
		else if(pilih == 2){
			banner();
			printData();
			returnMenu();
		}
		
		else if(pilih == 3){
			banner();
			updateData();
			returnMenu();
		}
		
		else if(pilih == 4){
			banner();
			hapusData();
			returnMenu();
		}
		
		else if(pilih == 5) exit(0);
	
	}
return 0;
}
