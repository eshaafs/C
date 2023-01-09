#include <stdio.h>

struct biner{
	unsigned bit0 : 1; unsigned bit1 : 1;
	unsigned bit2 : 1; unsigned bit3 : 1;
	unsigned bit4 : 1; unsigned bit5 : 1;
	unsigned bit6 : 1; unsigned bit7 : 1;
};

union byte{
	unsigned char ch;
	struct biner bit;
};

int main(){
	unsigned char ch;
	union byte x;
	printf("input number (0-255): ");
	scanf("%d", &ch);
	x.ch = ch;
	printf("%d binary = %d%d%d%d%d%d%d%d", 1, x.bit.bit7, x.bit.bit6, x.bit.bit5, x.bit.bit4, x.bit.bit3, x.bit.bit2, x.bit.bit1,x.bit.bit0);
	getch();
return 0;
}
