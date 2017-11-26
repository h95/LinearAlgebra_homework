#include "stdafx.h"
#include "matrix.h"

//¥Mß‰LUØx∞} 
void find_LU(matrix A, matrix *L, matrix *U)
{
	matrix L1, L2, A1;
	float x;
	L1 = L2 = I;
	
	x = -(A.element[1][0] / A.element[0][0]);	L1.element[1][0] = x;
	x = -(A.element[2][0] / A.element[0][0]);	L1.element[2][0] = x;
	
	A1 = matrix_multi(L1, A);
	
	x = -(A1.element[2][1] / A1.element[1][1]);	L2.element[2][1] = x;
	
	*U = matrix_multi(L2, A1);
	*L = matrix_multi(inv(L1), inv(L2));
}
