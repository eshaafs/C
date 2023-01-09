#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
//	//fgetc
//	char ch;
//	FILE *fp1;
//	int i;
//	fp1 = fopen("kata.cpp", "r");
//	
//	if(fp1 == NULL){
//		printf("File tidak dapat dibuka");
//		exit(1);
//	}
//	
//	while(!feof(fp1)){
//		ch = fgetc(fp1);
//		printf("%c",ch);
//	}
//	
//	fclose(fp1);
		
//	//fputc
//	char ch;
//	FILE *fp2;
//	int i;
//	char kata[100] = "Ini adalah percobaan untuk menuliskan kalimat kedalam file test.txt";
//	fp2 = fopen("test.txt", "w");
//	
//	if(fp2 == NULL){
//		printf("File tidak dapat dibuat!");
//		exit(1);
//	}
//	
//	for(i = 0; i < strlen(kata); i++){
//		fputc(kata[i], fp2);
//	}
//	
//	fclose(fp2);


//	//fgets
//	char kalimat[100];
//	FILE *fp3;
//	fp3 = fopen("kalimat.cpp", "r");
//	
//	if(fp3 == NULL){
//		printf("File tidak dapat dibuka!");
//		exit(1);
//	}
//	
//	fgets(kalimat, 100, fp3);
//	printf("%s", kalimat);
//	
//	fclose(fp3);

//	//fputs
//	char kalimat2[100] = "Ini adalah kalimat yang ditulis dengan perintah fputs()";
//	FILE *fp4;
//	fp4 = fopen("fputs.txt", "w");
//	
//	if(fp4 == NULL) {
//		printf("File tidak dapat dibuat!");
//		exit(1);
//	}
//	
//	fputs(kalimat2, fp4);
//	
//	fclose(fp4);

//	//fprintf
//	FILE *fp5;
//	fp5 = fopen("fprintf.txt", "w+");
//	
//	if(fp5 == '\0'){
//		printf("FIle tidak dapat dibuat!");
//		exit(1);
//	}
//	
//	fputs("mantab jiwa", fp5);
//	fprintf(fp5, "\n%s %d %f\n", "bagus", 10, 7.20);
//	
//	fclose(fp5);

//	//fscanf
//	FILE *fp6;
//	fp6 = fopen("fprintf.txt", "r");
//	char coba[50];
//	int i;
//	float j;
//	
//	if(fp6 == '\0'){
//		printf("File tidak dapat dibuka!");
//		exit(1);
//	}
//	
//	fscanf(fp6, "%[^\n]s", coba)
//	printf("%s\n", coba);
//	fscanf(fp6,"%s %d %f", coba, &i, &j);
//	printf("%s %d %f", coba, i, j);
//	
//	fclose(fp6);

	//fwrite
	FILE *fp7;
	int arr[] = {1,2,4,5,6};
	fp7 = fopen("test.dat", "w");
	
	if(fp7 == '\0'){
		printf("File tidak dapat dibuat!");
		exit(1);
	}
	
	fwrite(arr, sizeof(arr), 1, fp7);
	
	fclose(fp7);
	
	//fread
	FILE *fp8;
	fp8 = fopen("test.dat", "r+");
	int bin[5], i;
	
	if(fp8 == '\0'){
		printf("File tidak dapat dibuka!");
		exit(1);
	}	
	
	fread(bin, sizeof(bin), 1, fp8);
	for(i = 0; i < 5; i++) printf("%d ", bin[i]);
	
	fclose(fp8);
return 0;
}
