#include <stdio.h>
int main(void) {
	int nilai[10];
	float total, rata_rata;
	printf("CONTOH PROGRAM ARRAY\n");
	printf("===================================\n");
	printf("\n\n");
	
	for (int i=0; i<10; i++){
	printf("penginputan nilai ke-%d : ", i+1);
	scanf("%d", &nilai[i]);
	fflush(stdin);
	total += nilai[i];
}
	rata_rata = total / 10;
	printf("\n\n");
	printf("Rata-rata nilai : %.2f\n", rata_rata);
return 0;
}

