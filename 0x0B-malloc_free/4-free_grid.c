#include "main.h"
#include <stdlib.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * Description: free memory allocated by alloc_grid.
  */


void free_grid(int **grid, int height)
{
    int i;

    if (!grid)
        return;

    for (i = 0; i < height; i++)
        free(grid[i]);

    free(grid);
}

