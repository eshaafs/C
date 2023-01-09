#include <stdio.h>

void primeNumber(int n){
	int bilPrima[n+1];
	bilPrima[1] = 0;
	
	for (int i=2; i<=n; i++) 
		bilPrima[i] = 3; //unknown
		
	for (int z=2; z<=n; z++){
		if (bilPrima[z] == 3) {
			bilPrima[z] = 1;
			for (int j=2; j <= n/z; j++){
				if(bilPrima[z*j]==3){
					bilPrima[z*j] = 0;
				}
			}
		}
	}
	
	for (int i=1; i<=n; i++){
		if(bilPrima[i]==1){
			printf("%d ", i);
		}
	}
}

int main(){
	primeNumber(10);
}
