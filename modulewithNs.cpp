#include "pch.h"
#include "modulewithNs.h"
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace matrix;
using namespace std;
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
			cout <<setw(4)<< Matrix[i][j];
		}
		cout << endl;
	}
	Sum();
	

	// delete matrix 
	for (int i = 0; i < rows+1; i++)
	{
		delete[] Matrix[i];
	}
	delete[] Matrix;
	
}
void matrix::Sum() 
	{

	}
	void Show();
