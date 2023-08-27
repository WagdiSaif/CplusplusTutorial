#include "stdafx.h"
#include "StackSLL.h"
#include<iostream>
#include<string>
using namespace std;
void mainSLL() {
	StackSLL<int> stackLL;
	stackLL.push(23);
	stackLL.push(25);
	stackLL.push(24);
	stackLL.pop();
	stackLL.DisplayElements();
	cout << "\n\n";
	cout << stackLL.size()<<endl;
	stackLL.push(2);
	cout << stackLL.size() << endl;
	stackLL.DisplayElements();
	cout <<endl;
	//Stack of String

	cout << endl;
	StackSLL<char*>  stackS;
	stackS.push("Wagdi");
	stackS.push("Hamed");
	stackS.push("Sam");
	stackS.push("Ali");
	cout << "items Stack before pop are: \n";
	stackLL.DisplayElements();
	cout << stackS.size() << endl;
	stackS.pop();
	stackS.pop();
	cout << "item Stack after pop are: \n";
	stackS.DisplayElements();
	cout << endl;
	system("pause");
	//return 0;
}