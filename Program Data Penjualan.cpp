#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
	int no, harga;
	char namaMinuman[10], size[10], penyajian[10], enter;
} dataPenjualan[100], reset;

unsigned pilih;
char kembali;

void banner(){
	printf("====================================================\n");
	printf("\t     PROGRAM DATA PENJUALAN\n");
	printf("\t       Team Assignment - 4\n");
	printf("copyright © 2020 Team 2 Member(s) all right reserved\n");
	printf("====================================================\n\n");
}

int menu(){
	system("cls");
	banner();
	printf("Menu: \n");
	printf("1. Input Data\n");
	printf("2. View History\n");
	printf("3. Delete History\n");
	printf("4. Exit\n\n");
	printf("Masukkan pilihan anda: ");
	scanf("%d", &pilih);
	fflush(stdin);
	while(pilih < 1 || pilih > 4){
		printf("Menu yang anda pilih tidak tersedia!\n");
		printf("Silakan masukkan kembali pilihan anda: ");
		scanf("%d", &pilih);
		fflush(stdin);
	}
	return pilih;
}

char returnMenu(){
	printf("\nKembali ke menu utama? (y/n) ");
	scanf("%c", &kembali);
	if(kembali == 'y' || kembali == 'Y'){
		system("cls");
		menu();
	} 
return kembali;
}

void inputData(){
	char namaMinuman[10], size[10], penyajian[10]; 
	system("cls");
	banner();
	printf("Input Data:\n\n");
	printf("Nama Minuman\t: ");
	scanf("%s", namaMinuman);
	fflush(stdin);
	while((strcmp(namaMinuman, "Kopi") != 0) && (strcmp(namaMinuman, "kopi") != 0) && (strcmp(namaMinuman, "Teh") != 0) && (strcmp(namaMinuman, "teh") != 0) && (strcmp(namaMinuman, "Coklat") != 0) && (strcmp(namaMinuman, "coklat") != 0) && (strcmp(namaMinuman, "Soda") != 0) && (strcmp(namaMinuman, "soda") != 0)) {
		printf("Nama minuman tidak tersedia, silakan masukkan Kopi, Teh, Coklat atau Soda!\n");
		printf("\t\t: ");
		scanf("%[^\n]s", namaMinuman);
		fflush(stdin);
	}
	printf("Size\t\t: ");
	scanf("%s", size);
	fflush(stdin);
	while((strcmp(size, "Small") != 0) && (strcmp(size, "small") != 0) && (strcmp(size, "Medium") != 0) && (strcmp(size, "medium") != 0) && (strcmp(size, "Largest") != 0) && (strcmp(size, "largest") != 0)) {
		printf("Size tidak tersedia, silakan masukkan Small, Medium atau Largest!\n");
		printf("\t\t: ");
		scanf("%[^\n]s", size);
		fflush(stdin);
	}
	printf("Penyajian\t: ");
	scanf("%s", penyajian);
	fflush(stdin);
	while((strcmp(penyajian, "Dingin") != 0) && (strcmp(penyajian, "dingin") != 0) && (strcmp(penyajian, "Panas") != 0) && (strcmp(penyajian, "panas") != 0) && (strcmp(penyajian, "Hangat") != 0) && (strcmp(penyajian, "hangat") != 0)) {
		printf("Penyajian tidak tersedia, silakan masukkan Dingin, Panas atau Hangat!\n");
		printf("\t\t: ");
		scanf("%[^\n]s", penyajian);
		fflush(stdin);
	}

	int harga = strlen(size) * strlen(namaMinuman) * strlen(penyajian) * 100;
	
	printf("\n-----------------------------------------\n");
	printf("\n\nBerikut pesanan anda: \n");
	printf("Nama Minuman\t: %s\n", namaMinuman);
	printf("Size\t\t: %s\n", size);
	printf("Penyajian\t: %s\n", penyajian);
	printf("Harga\t\t: Rp.%d\n", harga);
	
	char konfirmasi;
	printf("\nKonfirmasi pesanan? (y/n) ");
	scanf("%c", &konfirmasi);
	fflush(stdin);
	
	while(konfirmasi != 'y' && konfirmasi != 'Y' && konfirmasi != 'n' && konfirmasi != 'N'){
		printf("Pilihan yang anda masukkan salah!\n");
		printf("Konfirmasi pesanan? (y/n) ");
	}
	
	if(konfirmasi == 'y' || konfirmasi == 'Y'){
		int i;
		for(i = 0; i < 100; i++){
			if(*dataPenjualan[i].namaMinuman == '\0'){
				dataPenjualan[i].no = i+1;
				dataPenjualan[i].harga = harga;
				strcpy(dataPenjualan[i].namaMinuman, namaMinuman);
				strcpy(dataPenjualan[i].size, size);
				strcpy(dataPenjualan[i].penyajian, penyajian);
				break;
			}
		}
	} else if(konfirmasi == 'n' || konfirmasi == 'N') menu();
	returnMenu();
	if(kembali == 'n' || kembali == 'N') inputData();
}

void viewHistory() {
		
	system("cls");
	banner();
	printf("\nHistory Penjualan:\n\n");
	printf("-----------------------------------------\n\n");
	int i;
	char kosong[1];
	for(i = 0; i < 100; i++){
		if(strcmp(dataPenjualan[i].namaMinuman,kosong) == 0) continue;
		printf("No \t\t: %d\n", dataPenjualan[i].no);
		printf("Nama Minuman \t: %s\n", dataPenjualan[i].namaMinuman);
		printf("Size \t\t: %s\n", dataPenjualan[i].size);
		printf("Penyajian \t: %s\n", dataPenjualan[i].penyajian);
		printf("Harga \t\t: Rp.%d\n", dataPenjualan[i].harga);
		printf("%c", dataPenjualan[i].enter);
		printf("-----------------------------------------\n\n");
	}
	returnMenu();
	if(kembali == 'n' || kembali == 'N') viewHistory();
}

void deleteHistory(){

	int i = 0;
	char kosong[1];
	
	system("cls");
	banner();
	printf("\nHistory Penjualan:\n\n");

	printf("----------------------------------------------------------------\n");
	printf("No.\tNama Pesanan\tSize\t\tPenyajian\tHarga\n");
	printf("----------------------------------------------------------------\n");
	for(i = 0; i < 100; i++){
		if(strcmp(dataPenjualan[i].namaMinuman,kosong) == 0) continue;
		printf("%d\t%s\t\t%s\t\t%s\t\t%d\n", dataPenjualan[i].no, dataPenjualan[i].namaMinuman, dataPenjualan[i].size, dataPenjualan[i].penyajian, dataPenjualan[i].harga);
	}
	printf("----------------------------------------------------------------\n");
	
	int index;
	char del;
	printf("Masukkan index yang ingin dihapus: ");
	scanf("%d", &index);
	fflush(stdin);
	i = 0;
	for(i = 0; i < 100; ++i){
		if(dataPenjualan[i].no == index){
			printf("\n\nNo \t\t: %d\n", dataPenjualan[i].no);
			printf("Nama Pesanan \t: %s\n", dataPenjualan[i].namaMinuman);
			printf("Size \t\t: %s\n", dataPenjualan[i].size);
			printf("Penyajian \t: %s\n", dataPenjualan[i].penyajian);
			printf("Harga \t\t: Rp.%d\n", dataPenjualan[i].harga);
			printf("%c", dataPenjualan[i].enter);
			printf("\nApakah anda ingin menghapus data tersebut? (y/n) ");
			scanf("%c", &del);
			fflush(stdin);
			while(del != 'y' && del != 'Y' && del != 'n' && del != 'N'){
				printf("Pilihan yang ada masukkan salah!\n");
				printf("\nApakah anda ingin menghapus data mahasiswa tersebut? (y/n): ");
				scanf("%c", &del);
				fflush(stdin);
			}
			
			if(del == 'y' || del == 'Y'){
				dataPenjualan[i] = reset;
				printf("Data Successfully Deleted...!\n");
			} 
		}
	}
	returnMenu();
	if(kembali == 'n' || kembali == 'N') deleteHistory();
}

int main(){
	FILE *fp;
	fp = fopen("dataminuman.txt","a+");
	menu();
	while(pilih <= 4){
		
		if(pilih == 1){
			inputData();
		}
		
		if(pilih == 2){
			viewHistory();
		}
		
		if(pilih == 3){
			deleteHistory();
		}
		
		if(pilih == 4) {
			int i;
			for(i = 0; i < 100; i++){
					if(*dataPenjualan[i].namaMinuman == '\0' ) continue;
					fprintf(fp,"%s#%s#%s#%d\n", dataPenjualan[i].namaMinuman, dataPenjualan[i].size, dataPenjualan[i].penyajian, dataPenjualan[i].harga);
			}
			printf("\n\nData telah disimpan!\n");
			printf("Terimakasih!");
			exit(0);
		}
	}
	fclose(fp);
return 0;
}
