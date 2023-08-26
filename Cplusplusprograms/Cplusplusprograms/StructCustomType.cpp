
#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;
typedef struct Preson{
	
	string name;
	int age;
	
	string qualifcation;

} ;
//note you can use the following code:
//typedef class Preson {
//public:
//	string name;
//	int age;
//
//	string qualifcation;
//
//};

int mainStru()
{
	Preson info[3];



	// User info Wagdi
	info[0].name = "Wagdi Saif";
	info[0].age = 25;
	info[0].qualifcation ="B.ENG";

	cout << "Name: " <<info[0].name << endl;
	cout << "Age: " << info[0].age << endl;
	cout << "Qualifcation: " << info[0].qualifcation << endl;
	// User info Mohammed
	info[1].name = "Mohammed Ali";
	info[1].age = 29;
	info[1].qualifcation = "B.ENG";

	cout << "Name: " << info[0].name << endl;
	cout << "Age: " << info[0].age << endl;
	cout << "Qualifcation: " << info[0].qualifcation << endl;
	// User info Mohammed
	info[1].name = "Mohammed Ali";
	info[1].age = 29;
	info[1].qualifcation = "B.ENG";

	cout << "Name: " << info[1].name << endl;
	cout << "Age: " << info[1].age << endl;
	cout << "Qualifcation: " << info[1].qualifcation << endl;
	// User info Sam
	info[2].name = "Sam hamed";
	info[2].age = 20;
	info[2].qualifcation = "student";

	cout << "Name: " << info[2].name << endl;
	cout << "Age: " << info[2].age << endl;
	cout << "Qualifcation: " << info[2].qualifcation << endl;
	cout << endl << endl;
	//new will display them by loops
	for (int i = 0; i < size(info); i++) {

		cout << "Name: " << info[i].name << endl;
		cout << "Age: " << info[i].age << endl;
		cout << "Qualifcation: " << info[i].qualifcation << endl;
	}

	system("pause");

	return 0;

}


