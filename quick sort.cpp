#include<stdio.h>
#include<string.h>

void tukar(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void quickSort(int arr[], int kiri, int kanan){
	int j,k;
	if(kiri < kanan){
		j = kiri; k = kanan+1;
		do{
			do {j++;} while (arr[j] < arr[kiri]);
			do {k--;} while (arr[k] > arr[kiri]);
			if(j < k) tukar(&arr[j],&arr[k]);
		} while(j <= k);
		tukar(&arr[kiri],&arr[k]);
		quickSort(arr, kiri, k-1);
		quickSort(arr, k+1, kanan);
	}
}

int main(){
	int A[] = {17, 3, 23, 12, 6, 8, 2, 1, 13, 32, 27, 15};
	int kiri = 0;
	int kanan = 12;
	quickSort(A,kiri,kanan);
	for(int i=0;i<12;i++){
		printf("%d ", A[i]);
	}
return 0;
}
