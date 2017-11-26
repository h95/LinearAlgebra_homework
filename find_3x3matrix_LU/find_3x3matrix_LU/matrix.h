#include <stdio.h>

typedef struct	//三階方陣結構 
{
	float element[3][3];
}matrix;
const matrix I = {1,0,0,0,1,0,0,0,1};			//三階單位矩陣 

float three_det(matrix A);						//三階方陣行列式 

//........................三階方陣的加減乘.........................//
matrix matrix_add(matrix A, matrix B);			//三階方陣加法
matrix matrix_sub(matrix A, matrix B);			//三階方陣減法
matrix coe_multi(matrix A, float c);			//三階方陣乘係數 
matrix matrix_multi(matrix A, matrix B);		//兩個三階方陣相乘
//.................................................................//
void print_matrix(matrix A);					//印出三階方陣 
matrix inv(matrix A);							//三階方陣反矩陣(根據Cayley-Hamilton定理)
void find_LU(matrix A, matrix *L, matrix *U);	//尋找LU矩陣 
