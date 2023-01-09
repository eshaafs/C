#include <stdio.h>
#include <stdlib.h>

#include<stdio.h>
#include<string.h>

void tukar(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void mergesort(int array[], int low, int mid, int high){
	int temp[high + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    while (i <= mid)
        temp[k++] = array[i++];
    while (j <= high)
        temp[k++] = array[j++];
    k--;
    while (k >= 0)
    {
        array[k + low] = temp[k];
        k--;
    }
}

void partisi(int arr[], int low, int high){
	int mid;
	if(low < high){
		mid = (low+high)/2
		partisi(arr, low, mid);
		partisi(arr, mid+1, high);
		mergesort(arr, low, mid, high);
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
