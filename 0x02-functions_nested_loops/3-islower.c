#include "main.h"
/**
 * _islower – function to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
char i;
int lower = 0;

for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}

return (lower);
}

