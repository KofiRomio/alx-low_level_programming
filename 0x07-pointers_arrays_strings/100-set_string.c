#include "main.h"
/**
 * set_string - writes the value of pointer to a char
 * @s:pointer to a char
 * @to:pointer to pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
