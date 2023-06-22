#include <unistd.h>
/**
 * _putchar-writes the charcter to stdout
 * @c: The charcter to print
 * Return: on success 1.
 * On error, -1 is returned and error is set appropriately
 */
 int _putchar(char c)
 {
 return (write (1, &c, 1));
 }
