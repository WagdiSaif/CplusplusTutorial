#include "stdafx.h"

#include <iostream>
#include<fstream>
#include <string>
#include <sstream>

#include <stdlib.h>


using namespace std;

void bubbleSort(double* Arr,int Size) {
	double temp;
	for (int i = 0; i < Size; i++) {


		for (int j = i; j < Size-1; j++)
		{
			if (Arr[i] >Arr[j+1]) {

				temp = Arr[i];
				Arr[i] = Arr[j + 1];
				Arr[j + 1] = temp;

				


			}

		

		}

	}

}

int main() {
	double Array[] = { 17.0, 10.0,20.0,30.0,40.0,50.0,12.0,13.0 };
	cout << "Array Element before sorting are:  \n";
	for (int i = 0; i < 7; i++) {
		cout << Array[i]<<"  ";
	}

	cout << "\n";
	bubbleSort(Array, 7);
	cout << "Array Element after sorting are:  \n";
	for (int i = 0; i < 7; i++) {
		cout << Array[i] << "  ";
	}

	cout << "\n";
	

	system("pause");
	return 0;
}