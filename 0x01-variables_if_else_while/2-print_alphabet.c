#include <stdio.h>

#include <ctype.h>

/**
 * main - print the alphabet in lowercase,followed by a new line
 * You can only use the putchar 2 times
 * Return: 0
 */

int main(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
