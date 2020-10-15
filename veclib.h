#ifndef VECLIB_H
#define VECLIB_H

#define DIM 4
// vector type
typedef float Vector[DIM]	;

// functions
// print vector
void print(Vector);
// vector addition
void add(Vector, Vector, Vector);
// elementwise product
void ele_Prod(Vector, Vector, Vector);
// difference of two vectors
void diff(Vector, Vector, Vector);
// dot product
float dot_Prod(Vector, Vector);
// norm of two vectors
float norm(Vector, Vector);
// angle
float angle(Vector, Vector);

// defining print function
void print(Vector vec_a) 
{
	printf("[ ");
	for (int i=0; i<DIM; i++)
		printf("%.2f ", vec_a[i]);
	printf("]\n");
};

#endif