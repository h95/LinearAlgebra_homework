#include "stdafx.h"
#include "matrix.h"
//........................�T����}���[�.........................//

//�T����}�[�k
matrix matrix_add(matrix A, matrix B)
{
	matrix sum;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			sum.element[i][j] = A.element[i][j] + B.element[i][j];
			
	return sum;
}

//�T����}��k
matrix matrix_sub(matrix A, matrix B)
{
	matrix dif;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			dif.element[i][j] = A.element[i][j] - B.element[i][j];
			
	return dif;
}

//�T����}���Y�� 
matrix coe_multi(matrix A, float c)
{
	matrix coe;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			coe.element[i][j] = A.element[i][j] * c;
	return coe;
} 

//��ӤT����}�ۭ�
matrix matrix_multi(matrix A, matrix B)
{
	matrix product;
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			product.element[i][j] = 0;
			
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			for(int k = 0; k < 3; k++)
				product.element[i][j] += (A.element[i][k] * B.element[k][j]);
				
	return product;
}

