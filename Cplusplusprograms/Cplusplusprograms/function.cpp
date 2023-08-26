#include "stdafx.h"

#include<iostream>
#include<string>


using namespace std;
float  Sum(float x,float y) {


	return x + y;
}

template<class T>
T functionChan(T x,T y) {



	return x > y ? x : y;

	

}
typedef string (*info)(string);
void  PrintName(info funct) {
string arg=	funct("I am Argument of Function");
cout << arg;

}

string ToString(string x) {

	return "body of functions";
}

float  Max(float x, float y) {

	
	return x>y?x:y;//Equi to if(x>y) return x else return y;
}
void DisplayValue(float x, float y) {
	cout << "x  value is:    " << x <<"\t y values is: "<<y <<endl;
}
int mainFun()
{
	
		float x, y, ch;
		cout << "\enter number one  : ";
		cin >> x;
		cout << "\enter number two  : ";
		cin >> y;
		DisplayValue(x, y);
		//			cin >> a;
	cout << "sumation numbers is " << Sum(x, y)<<endl;
	cout << "Max number is " << Max(x, y) << endl;
	PrintName([](string x) {

		
		return x;
		

	});
	info str =&ToString;
	cout << endl;
	PrintName(str);
	cout << endl;
	auto fun = [](float x, float y)-> int  {
		return x*y;

	};
	cout << "multiple number is:    \n" << fun(x, y) << endl;
	int max1 =functionChan<int>(67, 22);
	double max2 = functionChan<double>(60.12, 22.12);
	float max3 = functionChan<float>(67, 22);


	
		system("pause");
	
		return 0;}


