#include "stdafx.h"
#include "matrix.h"

//三階方陣行列式 
float three_det(matrix A)
{
	float det = 0;
	
	for(int i = 0; i < 3; i++)
	{
		det += A.element[0][i] * A.element[1][(i + 1) % 3] * A.element[2][(i + 2) % 3];
		det -= A.element[0][i] * A.element[1][(i + 2) % 3] * A.element[2][(i + 1) % 3];
	}
	return det;
}
