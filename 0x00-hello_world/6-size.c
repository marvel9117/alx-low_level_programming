#include <stdio.h>
/**
*main - main function
*
*
*Return: return 0
*/
int main(void);
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeoff(a));
	printf("Size of int: %ld byte(s)\n", sizeoff(b));
	printf("Size of long int: %ld byte(s)\n", sizeoff(c));
	printf("Size of long long int: %ld byte(s)\n", sizeoff(d));
	printf("Size of float: %ld bytes(s)\n", sizeoff(f));
	return (0);
}
