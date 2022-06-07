#include <stdio.h>

/**
 * main - print alphabet in upper and lowercase
 *
 * Return: zero
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'z'; CH++)
		puthar(CH);
	putcher('\n');
	return (0);
}
