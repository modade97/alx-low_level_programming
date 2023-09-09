#include "main.h"

/**
 * array_range - function creates an array of integers
 * @min: function parameter. minimum numbers
 * @max:function parameter. maximum numbers.
 * Return: pointer to newly allocated space
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *output;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		output[i] = min++;
	}
	return (output);
}
