#include "stdafx.h"
#include<iostream>
using namespace std;
#define rows 5
#define columns 3

//array  size row and columns
typedef int ArrayType;//we can change type of array to any types easly ex:double ,float,..etc from here
void printlin() {
	cout << "\n";
}

int mainArrp()
{//oneD arrays 
	ArrayType arrayOneD[] = { 32,67,88,9,89 };


	for (int r = 0; r < 5; r++)
		cout << arrayOneD[r] << '\t';
	printlin();

	int myArray[rows][columns];
	for (int i = 0; i < rows; i++) {


		for (int j = 0; j < columns; j++)
		{

			myArray[i][j] = (i*j) + 1;
		}

	}

	//display array Elements
	for (int i = 0; i < rows; i++) {


		for (int j = 0; j < columns; j++)
		{

			cout << myArray[i][j];
		}
		printlin();

	}
	printlin();

	//using pointers


	//int *arrayP=new  int[5]{32,67,88,9,89 }; its valid syntax:
	ArrayType *arrayP = arrayOneD;
	for (int r = 0; r < 5; r++) {

		cout << *(arrayP + r) << '\t';

	}
	printlin();


	ArrayType(*Array2DP)[columns] = myArray;
	cout << "the following 2DArray With pointers\n";
	for (int i = 0; i < rows; i++) {


		for (int j = 0; j < columns; j++)
		{

			cout << *(*(Array2DP + i) + j);

		}
		printlin();

	}

	cout << endl << endl << "here i going to display 3D Array\n";
	int array3D[3][4][3] = { {


		{ 1,2,3 },
	{4,5,6},
	{7,8,9},
	{17,18,19}


		},
		{


		{ 10,11,12 },
		{13,14,15},
		{16,17,18},
		{ 17,18,19 }




		},
		{


			{ 19,20,21 },
		{22,23,24},
		{25,26,27},
		{ 17,18,19 }



		},



	};

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			for (int c = 0; c < 3; c++) {
				cout << array3D[a][b][c]<<" ";
			}
			cout << endl;
		}
		cout << endl;
	}


	//array dynamically

	int siz = 3;
	double *array1D = new double[siz];
	*(array1D+0)= 20.3;
	array1D[1] = 90.1;
	array1D[2] = 80.1;
	cout << "Element  array are:  \n";
	for (int i = 0; i < siz; i++) {
		cout << array1D[i]<<" ";
	}

	cout << endl;
	delete []array1D;
	system("pause");

	return 0;
}