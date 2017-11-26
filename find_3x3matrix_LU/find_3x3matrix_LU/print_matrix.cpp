#include "stdafx.h"
#include <stdio.h>
#include "matrix.h"

//¦L¥X¤T¶¥¤è°} 
void print_matrix(matrix A)
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			printf("%6.2f ", A.element[i][j]);
		printf("\n");
	}
}
