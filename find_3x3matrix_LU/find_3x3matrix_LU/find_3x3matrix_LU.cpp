// find_3x3matrix_LU.cpp: �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h" 

int main(int argc, char *argv[])
{
	matrix	A, L, U;

	printf("�п�J�@��3x3��A�x�}:\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf_s("%f", &A.element[i][j]);

	find_LU(A, &L, &U);

	printf("\n�x�}A��:\n");
	print_matrix(A);

	printf("\n�x�}A��L�x�}(�U�T���x�})��:\n");
	print_matrix(L);

	printf("\n�x�}A��U�x�}(�W�T���x�})��:\n");
	print_matrix(U);

	system("PAUSE");
	return 0;
}