#include "stdafx.h"
#include "ArrayStack.h"
#include<iostream>
#include<string>
using namespace std;
int main(){

	//stack of integer
	str::ArrayStack<int>  stack1(4);
	stack1.push(89);
	stack1.push(13);
	stack1.push(14);
	stack1.push(15);

	stack1.printStack();
	cout << "\nitem Stack after reverse are: \n";
	stack1.reverse();
	stack1.printStack();
	cout << "\nitem Stack after pop are: \n";
	stack1.pop();
	stack1.pop();
	stack1.printStack();


	//stack of String
	cout << endl;
	str::ArrayStack<char*>  stackSI(4);
	stackSI.push("Wagdi");
	stackSI.push("Hamed");
	stackSI.push("Sam");
	stackSI.push("Ali");

	stackSI.printStack();

	cout << "item Stack after pop are: \n";
	stackSI.pop();
	stackSI.pop();
	stackSI.printStack();
	
	
	system("pause");
	return 0;
}