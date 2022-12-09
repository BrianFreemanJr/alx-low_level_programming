#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by bryan
 * Return: 0
*/
int main(void)
{       
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	print("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
        print("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	print("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	print("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	print("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return(0);
}
