#include<stdio.h>
void tukar(int *x, int *y){
	int copy;
	copy = *x;
	*y = *x;
	*x = copy;
	printf("nilai yang ditukar adalah\n");
	printf("a = %d\t b = %d\n",*x, *y);
}

int main(){
	int a = 100, b = 200;
	printf("nilai sebelum ditukar adalah\n");
	printf("a = %d\t b = %d\n", a, b);
	tukar(&a, &b);
return 0;
}
