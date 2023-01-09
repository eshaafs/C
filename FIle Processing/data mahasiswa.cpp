#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tampilMHS(){
	FILE *data;
	data = fopen("data.txt", "r");
	char nama[100], gender, jenisKelamin[30], tmp;
	int nim;
	
	printf("--------------------------------------------------\n");
	printf("NIM\t\tNama\t\t\tGender\n");
	printf("--------------------------------------------------\n");
	
	if(data == '\0'){
		printf("File tidak dapat dibuka!");
		exit(1);
	}
	
	while(!feof(data)){
		fscanf(data,"%[^#]d", &nim);
		fscanf(data,"#%[^#]s", nama);
		fscanf(data,"#%c", &gender);
		tmp = fgetc(data);
		if(gender == 'F') strcpy(jenisKelamin, "Perempuan");
		else if (gender == 'M') strcpy(jenisKelamin, "Laki-laki");
		printf("%d\t%s\t%s\n", nim, nama, jenisKelamin);
	}
	printf("--------------------------------------------------\n");
}

int main(){
	tampilMHS();
return 0;
}
