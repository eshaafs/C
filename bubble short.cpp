#include <stdio.h>
#include <stdlib.h>
#include <utility> 

void bubbleasc(int *arr, int a){
	int,i,j;
}
int main(){
	int n,i,j;
	printf("Input jumlah bilangan: ");
	scanf("%d", &n);
	fflush(stdin);
	int angka[n];
	for(i = 0; i < n; i++){
		printf("Masukkan angka ke-%d: ", i+1);
		scanf("%d", &angka[i]);
		fflush(stdin);
	}
	
	int flag;
	flag = 0;
	i = 1;
	while((i < n) && (!flag)){
		flag = 1;
		for(j = n-1; j >= i; j--){
			if(angka[j-1] > angka[j]){
				
			}
		}
		i++;
	}
	for(i=0; i < n; i++){
		printf("%d ", angka[i]);
	}
return 0;
}
