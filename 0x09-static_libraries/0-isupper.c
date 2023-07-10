#include "main.h"
/**
*_isupper - Checks uppercase letters
*@c: Character to check
*Return: If uppercase return 1, else return 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
return (0);
}
