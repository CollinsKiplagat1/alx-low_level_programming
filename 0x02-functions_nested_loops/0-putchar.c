#include <unistd.h.>
#include <main.h>

/**
 * 0_putchar - writes the character to c to stdout
 * @c: The character to print
 *
 * Return: On success 1 .
 * On error, -1 is returned and no errror is set approriately
 */

int 0_putchar(char c)
{
return (write(1, &c, 1));
}
