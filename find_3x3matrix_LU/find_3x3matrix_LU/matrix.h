#include <stdio.h>

typedef struct	//�T����}���c 
{
	float element[3][3];
}matrix;
const matrix I = {1,0,0,0,1,0,0,0,1};			//�T�����x�} 

float three_det(matrix A);						//�T����}��C�� 

//........................�T����}���[�.........................//
matrix matrix_add(matrix A, matrix B);			//�T����}�[�k
matrix matrix_sub(matrix A, matrix B);			//�T����}��k
matrix coe_multi(matrix A, float c);			//�T����}���Y�� 
matrix matrix_multi(matrix A, matrix B);		//��ӤT����}�ۭ�
//.................................................................//
void print_matrix(matrix A);					//�L�X�T����} 
matrix inv(matrix A);							//�T����}�ϯx�}(�ھ�Cayley-Hamilton�w�z)
void find_LU(matrix A, matrix *L, matrix *U);	//�M��LU�x�} 
