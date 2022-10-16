#include "main.h"
/**
  *alloc_grid - returns a pointer to a 2D array of integers
  *
  *@width: width,num of columns of array
  *@height: height,num of rows of array
  *Return: Pointer to 2D array
  */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, w, h;
	int *p;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(width * sizeof(int));
		if (*(matrix + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = matrix[i];
				free(p);
			}
			free(matrix);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < height; w++)
		{
			matrix[h][w] = 0;
		}
	}
	return (matrix);
}
