#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *@i: integer to be computed
 *parameter:  integer value accepted
 *Return: absolute value of integer
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
