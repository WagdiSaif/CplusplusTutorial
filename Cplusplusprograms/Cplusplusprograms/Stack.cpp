#include "stdafx.h"
#include "stdafx.h"
#include "ArrayStack.h"


#include<iostream>
#include<string>


using namespace std;


//
int mainStArray(){

	//stack of integer
	str::ArrayStack<int>  stack1(4);
	stack1.push(89);
	stack1.push(13);
	stack1.push(14);
	stack1.push(15);

	stack1.DisplayElements();
	cout << "\nitem Stack after reverse are: \n";
	stack1.reverse();
	stack1.DisplayElements();
	cout << "\nitem Stack after pop are: \n";
	stack1.pop();
	stack1.pop();
	stack1.DisplayElements();


	//stack of String
	cout << endl;
	str::ArrayStack<char*>  stackS(4);
	stackS.push("Wagdi");
	stackS.push("Hamed");
	stackS.push("Sam");
	stackS.push("Ali");

	stackS.DisplayElements();

	cout << "item Stack after pop are: \n";
	stackS.pop();
	stackS.pop();
	stackS.DisplayElements();
	
	
	system("pause");
	return 0;
}