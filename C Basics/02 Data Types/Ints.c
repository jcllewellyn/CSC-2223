#include <stdio.h>
#include <stdint.h> // needed for int typedefs


int main() {
   	 // int (4 bytes)
        int x0, x1 = 10, x2 = -10; // int is signed using two's comp
	int32_t x3; // typedef, guarantees 32 bits from machine to machine

	printf("Size of x1 is %lu\n bytes", sizeof(x1));
	printf("Size of x3 is %lu\n bytes", sizeof(x3));

	// short (2 bytes)
	short y1 = 10;
	int16_t y2 = 10;

	printf("Size of y1 is %lu\n bytes", sizeof(y1));
	printf("Size of y2 is %lu\n bytes", sizeof(y2));

	// long (8 bytes)
	long z1 = 10;
	long z2 = 10;

	printf("Size of z1 is %lu\n bytes", sizeof(z1));
	printf("Size of z2 is %lu\n bytes", sizeof(z2));

	return 0;
}
