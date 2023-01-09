#include<stdio.h>
#include<string.h>
int maximum(int,int);
void line(char);
void kalkulasi(int, int, int *, int *);
void arrayPrint(int, int *);
void rotasi(char kata[ ]){
	int i, copy;
	int j = strlen(kata) - 1;
	for(i=0; i < j; i++,j--){
		copy = kata[i];
		kata[i] = kata[j];
		kata[j] = copy;
	}
}
int main(){
	int a, b;
	printf("Masukkan 2 bilangan: ");
	scanf("%d %d",&a, &b);
	printf("nilai maximumnya adalah: %d\n", maximum(a,b));
	char A = '-';
	line(A);
	int x = 5, y = 10, p, q;
	kalkulasi(x,y,&p, &q);
	printf("\nx + y = %d\n", p);
	printf("x * y = %d\n", q);
	int AA[ ] = {1,2,3,4};
	arrayPrint(2,AA);
	char kata[ ] = "MANTAB";
	rotasi(kata);
	printf("%s",kata);
return 0;
}

void line(char x){
	int i;
	for(i=0;i<10;i++){
		printf("%c",x);
	}
}

int maximum(int x, int y){
	int max = x;
	if(y>x) max = y;
	return max;
}

void kalkulasi(int x, int y, int *p, int *q){
	*p = x + y;
	*q = x * y;
}

void arrayPrint(int index, int *A){
	printf("AA[%d] = %d\n", index, A[index]);
}
