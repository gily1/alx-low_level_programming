#include "main.h"
/**
 * _isalpha - printing lower case and upper
 * @c: charcter to be tasted
 * Return: 1 if is either lower or upper case
 */
int _isalpha(int c)
{
if (((c >= 65 && c <= 90)) || ((c >= 97) && (c <= 122)))
{
return (1);
}
return (0);
}
