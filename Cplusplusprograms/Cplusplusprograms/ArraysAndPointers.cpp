#include "stdafx.h"
//#include<iostream>
//using namespace std;
//#define rows 5
//#define columns 3
//
////array  size row and columns
//typedef int ArrayType;//we can change type of array to any types easly ex:double ,float,..etc from here
//void printlin() {
//	cout << "\n";
//}
//
//int main()
//{//oneD arrays 
//	ArrayType arrayOneD[] = { 32,67,88,9,89 };
//
//
//	for (int r = 0; r < 5; r++)
//		cout << arrayOneD[r] << '\t';
//	printlin();
//
//	int myArray[rows][columns];
//	for (int i = 0; i < rows; i++) {
//
//
//		for (int j = 0; j < columns; j++)
//		{
//
//			myArray[i][j] = (i*j) + 1;
//		}
//
//	}
//
//	//display array Elements
//	for (int i = 0; i < rows; i++) {
//
//
//		for (int j = 0; j < columns; j++)
//		{
//
//			cout << myArray[i][j];
//		}
//		printlin();
//
//	}
//	printlin();
//
//	//using pointers
//
//
//	//int *arrayP=new  int[5]{32,67,88,9,89 }; its valid syntax:
//	ArrayType *arrayP = arrayOneD;
//	for (int r = 0; r < 5; r++) {
//
//		cout << *(arrayP + r) << '\t';
//
//	}
//	printlin();
//
//
//	ArrayType(*Array2DP)[columns] = myArray;
//	cout << "the following 2DArray With pointers\n";
//	for (int i = 0; i < rows; i++) {
//
//
//		for (int j = 0; j < columns; j++)
//		{
//
//			cout << *(*(Array2DP + i)+j);
//
//		}
//		printlin();
//
//	}
//
//	//delete array from memory
//
//	for (int d = 0; d < columns; d++)
//		delete[] Array2DP[d];
//	delete[] Array2DP;
//	delete[] arrayP;
//
//	system("pause");
//
//	return 0;
//}