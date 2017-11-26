#include "stdafx.h"
#include <stdio.h>
#include "matrix.h"

//印出三階方陣 
void print_matrix(matrix A)
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			printf("%6.2f ", A.element[i][j]);
		printf("\n");
	}
}
