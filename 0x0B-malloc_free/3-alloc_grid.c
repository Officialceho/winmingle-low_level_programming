#include "main.h"
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: allocate a height x width grid of integers on the heap and initialize all cells to 0.
  */


int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = malloc(height * sizeof(int *));
    if (!grid)
        return NULL;

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(width * sizeof(int));
        if (!grid[i])
        {
            while (i--)
                free(grid[i]);
            free(grid);
            return NULL;
        }
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }
    return grid;
}

