#include "stdafx.h"
#include "DoublyLL.h"
#include "Qeue.h"
#include <iostream>
#include <string>
using namespace std;
int main() {

	DL::DoublyLL<float> dl;
	dl.addfront(33.0);
	dl.addfront(34.0);
	dl.addfront(35.0);
	dl.addrear(32.0);
	dl.addrear(31.0);
	dl.ViewItems();

	//string
	DL::DoublyLL<string> dls;

	cout << endl;
	dls.addfront("Wagdi");
	dls.addfront("Ali");
	dls.addfront("Saqr");
	dls.addrear("Sam");
	dls.addrear("Hamed");
	dls.ViewItems();
	//following implement Qeue using DLL;
DL::Qeue<int> Q;
	
Q.Enqeue(12);
Q.Enqeue(13);
Q.Enqeue(14);
Q.Enqeue(15);
cout << "Deque:" <<Q.Deqeue() << endl;
cout << "Deque:" << Q.Deqeue() << endl;
cout << endl;
DL::Qeue<string> Q1;
Q1.Enqeue("Wagdi");
Q1.Enqeue("Ali");
Q1.Enqeue("Saqr");
Q1.Enqeue("Sam");
Q1.Enqeue("Hamed");
cout << "Deque:" << Q1.Deqeue() << endl;
cout << "Deque:" << Q1.Deqeue() << endl;
	system("pause");
	return 0;


}