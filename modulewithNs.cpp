#include "pch.h"
#include "modulewithNs.h"
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace matrix;
using namespace std;
void matrix::Show(int** matrix, int cols, int rows) 
{
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<< setw(15)<<matrix[i][j] ;

		}
		cout << endl;
	}
}
void matrix::GetRandomMatrix() 
{
	// create Matrix
	int cols, rows;
	cout << "Enter the number of rows: " ;
	cin >> rows;
	cout << "\n Enter the number of cols: ";
	cin >> cols;
	int** Matrix = new int*[rows+1];
	for (int i = 0; i < rows+1; i++)
	{
		Matrix[i] = new int[cols+1];
	}
	//main path 
	srand(time(NULL));
	int min, max;
	cout << "\n Enter min number in diapason";
	cin >> min;
	cout << "\n Enter max number in diapason";
	cin >> max;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Matrix[i][j] = min + rand() %  max ; 
		
		}
		
	}
	Show(Matrix, cols, rows);

	Sum(Matrix,cols, rows);
	

	// delete matrix 
	for (int i = 0; i < rows+1; i++)
	{
		delete[] Matrix[i];
	}
	delete[] Matrix;
	
}
void matrix::Sum(int** matrix, int cols, int rows)
	{
	int n = 0; int max;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			n+= matrix[i][j];
		}
	}
	matrix[rows ][cols ] = n;
	for (int i = 0; i < rows; i++)
	{
		n = 0;
		for (int j = 0; j < cols; j++)
		{
			n += matrix[i][j];
		}
		matrix[i][cols] = n;
		
	}
	for (int i = 0; i < cols; i++)
	{
		n = 0;
		for (int j = 0; j < rows; j++)
		{
			n += matrix[j][i];
			
		}
		matrix[rows][i] = n;
		
	}
	Show(matrix, cols + 1, rows + 1);

	}
	
