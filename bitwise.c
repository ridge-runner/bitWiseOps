/*
* Just a tiny example of C's bitwise operators.
*/

#include <stdio.h>

void displayBits(unsigned int value);

int main(void) {

	unsigned int number1 = 65535;
	unsigned int mask = 1;
	
	puts("The result of combining the following");
	displayBits(number1);
	displayBits(mask);

	puts("using the bitwise AND operator & is");
	displayBits(number1 & mask);

	// demonstrate bitwise inclusive OR (|)
	number1 = 15;
	unsigned int setBits = 241;
	puts("\nThe result of combining the following");
	displayBits(number1);
	displayBits(setBits);
	puts("using the bitwise inclusive OR operator | is ");
	displayBits(number1 | setBits);

	//demonstrate bitwise exclusive OR (^)

	number1 = 139;
	unsigned int number2 = 199;
	puts("\nThe result of combining the following");
	displayBits(number1);
	displayBits(number2);
	puts("using the bitwise exclusive OR operator ^ is");
	displayBits(number1 ^ number2);

	// demonstrate bitwise complement (~)
	number1 = 21845;
	puts("\nThe on's complement of");
	displayBits(number1);
	puts("is");
	displayBits(~number1);

	return 0;
} //MAIN()

void displayBits(unsigned int value) {
	//declare displayMask and left shift 31 bits
	unsigned int displayMask = 1 << 31;

	printf("%10u = ", value);

	// loop through bits
	for (unsigned int c = 1; c <= 32; ++c) {
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;

		if (c % 8 == 0) {
			putchar(' ');
		}
	}
	putchar('\n');
}//end