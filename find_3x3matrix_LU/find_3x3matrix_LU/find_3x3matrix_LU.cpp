// find_3x3matrix_LU.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h" 

int main(int argc, char *argv[])
{
	matrix	A, L, U;

	printf("請輸入一個3x3的A矩陣:\n");
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			scanf_s("%f", &A.element[i][j]);

	find_LU(A, &L, &U);

	printf("\n矩陣A為:\n");
	print_matrix(A);

	printf("\n矩陣A的L矩陣(下三角矩陣)為:\n");
	print_matrix(L);

	printf("\n矩陣A的U矩陣(上三角矩陣)為:\n");
	print_matrix(U);

	system("PAUSE");
	return 0;
}