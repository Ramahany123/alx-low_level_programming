#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int c) 
{
	if (c >= 65 && c<= 90)
		return(0);
	else
		return(1);
}
