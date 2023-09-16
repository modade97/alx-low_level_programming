#include "function_pointers.h"

/**
 * array_iterator - excutes function given as a parameter
 * @array: parameter
 * @size: function parameter
 * @action: function parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
