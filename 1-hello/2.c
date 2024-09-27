// chp1/nums.c
#include <stdio.h>
#include <limits.h>//최대 값/ 최소 값 볼때

int main(void) {
	// chat
	char ch = 'A';
	printf("char:\n");
	printf("Value:%c\n",ch);
	printf("Max:%d\n",CHAR_MAX);
	printf("Min:%d\n", CHAR_MIN);

		// signed short int
		signed short int sshort = 1234;
		printf("sifned short int:\n");
		printf("Value:%c\n", sshort);
		printf("Max:%d\n", CHAR_MAX);
		printf("Min:%d\n", CHAR_MIN);

		// unsigned short int
		unsigned short int ushort = 1234U;
		printf("unsigned short int:\n");
		printf("Value:%c\n", sshort);
		printf("Max:%d\n", USHRT_MAX);



		// signed int
		signed int sint = 12345;
		printf("\nnsigned int:\n");
		printf("Value:%d\n", sint);
		printf("Max:%d\n", INT_MAX);
		printf("Min:%d\n", INT_MIN);

		// signed long int
		signed short int sshort = 123456789L;
		printf("nnsigned long int:\n");
		printf("Value:%ld\n", slong);
		printf("Max:%d\n", LONG_MAX);
		printf("Min:%d\n", LONG_MIN);

		// unsigned long int
		unsigned short int ulong = 123456789L;
		printf("unsigned short int:\n");
		printf("Value:%lu\n", ulong);
		printf("Max:%d\n", USHRT_MAX);

	return 0;
}