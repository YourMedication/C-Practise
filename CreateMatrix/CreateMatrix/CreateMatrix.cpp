// CreateMatrix.cpp : Defines the entry point for the console application.
// This program creates a 2x2 matrix (using multidimensional arrays) calculates and also displays the matrix multiplication. 

#include "stdafx.h"
#include <iostream>
using namespace std;

const int size1 = 2;
const int size2 = 2;

void createMatrix(int args[][size2], int size1) // C++ requires that we specify the column size in the function definition.
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << "Please enter the entry ";
			cin >> args[i][j];
		}
	}
	cout << "\n";
}

void matrixMult(int args1[][size2], int args2[][size2], int mult[][size2], int size1) // Takes our two matrices args1, args2 and stores their product in mult. 
{

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			for (int k = 0; k < size2; k++) // This is basically the equivalent of doing sigma notation. See the formula for matrix multiplcation.
			{
				mult[i][j] += args1[i][k] * args2[k][j];
			}
		}
	}
}

void initialize(int mult[][size2], int size1) // Initializes our multiplcation matrix to all 0s. Otherwise it the other calculation won't work if it isn't initialized yet. 
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			mult[i][j] = 0;
		}
	}
}

void display(int mult[][size2], int size1) // displays the result of our matrix multiplication. 
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			cout << "mult[" << i << "][" << j << "]" << mult[i][j] << endl;
		}
	}
}

int main()
{

	int mat[size1][size2]; // Declare the 2D array.
	int mat2[size1][size2];
	int mult[size1][size2]; // This is the 2D array where the 

	createMatrix(mat, size1); // Remember that arrays always get passed by reference so it will change the array mat (this is different from regular variables that are passed by value. 
	createMatrix(mat2, size1);
	initialize(mult, size1);

	matrixMult(mat, mat2, mult, size1);
	display(mult, size1);

    return 0;
}

