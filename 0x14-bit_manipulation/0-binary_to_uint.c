#include "main.h"
/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: binary number
*Return: the converted unsigned intigers number or 0 if it fails
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, point;
	int n;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
		;
	n--;
	for (point = 1, uint = 0; n >= 0; n--)
	{
		if (b[n] == '0')
		{
			point *= 2;
			continue;
		}
		else if (b[n] == '1')
		{
			uint += point;
			point *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
