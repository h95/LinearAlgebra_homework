#include "stdafx.h"
#include "matrix.h"

//�T����}�ϯx�}(�ھ�Cayley-Hamilton�w�z)
matrix inv(matrix A)
{
	matrix A_2 = matrix_multi(A,A), inverse;
	float traceA = 0, traceA_2 = 0, c;
																////////////////////Cayley-Hamilton�w�z//////////////////////////////////////
	for(int i = 0; i < 3; i++)									//    -1     1                              trace(A)^2 - trace(A^2)        //
	{															//   A   = ------ * ( A^2 - trace(A) * A + ------------------------ * I)   //
		traceA += A.element[i][i];								//         det(A)                                      2                   //
		traceA_2 += A_2.element[i][i];							/////////////////////////////////////////////////////////////////////////////
	}
	
	c = (traceA * traceA - traceA_2) / 2;
	
	inverse = matrix_sub(A_2, coe_multi(A, traceA));
	inverse = matrix_add(inverse, coe_multi(I, c));
	inverse = coe_multi(inverse, three_det(A));
	
	return inverse;
}
