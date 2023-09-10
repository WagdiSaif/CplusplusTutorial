#include "stdafx.h"

#include <iostream>

#include <string>
#include <algorithm>

#define size 11

using namespace std;

void displayElementOfArrayAfterSorting(double* Array, string typeofsorting = " ") {
	cout << "\n";

	cout << "Array Element after " << typeofsorting << " sorting are:  \n";
	for (int i = 0; i <size; i++) {
		cout << Array[i] << "  ";
	}

	cout << "\n";
	


}
void selectionSort(double Arr[]) {
	double temp;
	for (int i = 0; i < size - 1; i++) {


		for (int j = i + 1; j < size; j++)
		{
			if (Arr[j]<Arr[i]) {

				temp = Arr[i];
				Arr[i] = Arr[j];
				Arr[j] = temp;




			}



		}

	}
	displayElementOfArrayAfterSorting(Arr, "selection");
	cout<<endl;

}

void bubbleSort(double Arr[]) {
	double temp;
	for (int i = 1; i < size; ++i) {


		for (int j = 0; j <= (size - i - 1); ++j)
		{

			if (Arr[j + 1]<Arr[j]) {

				temp = Arr[j + 1];
				Arr[j + 1] = Arr[j];
				Arr[j] = temp;




			}



		}

	}
	displayElementOfArrayAfterSorting(Arr,"bubble");
}
int  Partion(double Arr[], int start, int end) {
	int index = end;
	double pivot = Arr[start];

	int i = start, j = end;

	while (i < j) {

		do {

			i++;
		} while (Arr[i] <= pivot);


		do {

			j--;

		} while (Arr[j] >pivot);

		if (i <j) {
			swap(Arr[i], Arr[j]);

		}

	}

	swap(Arr[start], Arr[j]);
	
	return j;

}

void  quickSort(double Arr[], int start, int end) {
	if (start < end) {
		int apr = Partion(Arr, start, end);
		
		quickSort(Arr, start, apr);
		quickSort(Arr, apr + 1, end);
	}

}




int main() {
	double Array[] = { 19.0, 1.0,16.0, 10.0,20.0,3.0,40.0,50.0,12.0,100.0,13.0 };
	cout << "Array Element before sorting are:  \n";
	for (int i = 0; i < size; i++) {
		cout << Array[i]<<"  ";
	}  
	
	cout << "\n";
selectionSort(Array);
	

	cout << "\n";
	bubbleSort(Array);
	
	cout << "\n";
quickSort(Array, 0,size);
displayElementOfArrayAfterSorting(Array, " quick");
	cout << "\n";



	system("pause");
	return 0;
}