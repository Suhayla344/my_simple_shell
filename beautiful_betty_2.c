#include "shell.h"

/**
 * my_betty - calculates and prints the betty of two num
 * @num: the first number
 * @NUM: the second number
*/
void my_betty(int num, int NUM)
{
	int x = num + NUM;

	printf("the sum of %d and %d is: %d\n", num, NUM, x);
}
/**
*main - Entry point of the program
*
*Description: This function prints "This program passes Betty checks!!"
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int num = 4;
	int NUM = 5;

	my_betty(num, NUM);
	return (0);
}
