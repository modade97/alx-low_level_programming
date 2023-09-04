#include "main.h"

/**
 * alloc_grid - Function returns pointer to a two dimensional array
 * @width: first function parameter
 * @height: second function parameter
 * Return: NULL on failure | array pointer on success
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **rtm;

	if (width <= 0 || height <= 0)
		return (NULL);

	rtm = malloc(sizeof(int *) * height);

	if (rtm == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		rtm[i] = malloc(sizeof(int) * width);

		if (rtm[i] == NULL)
		{
			free(rtm);
			for (j = 0; j <= height; j++)
				free(rtm[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			rtm[i][j] = 0;
	}
	return (rtm);
}
