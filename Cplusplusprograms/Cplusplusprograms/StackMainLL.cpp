#include "stdafx.h"
#include "StackSLL.h"
//#include "StackSLL.cpp"
#include<iostream>
using namespace std;
int main() {
	StackSLL<int> sd;
	sd.push(23);
	sd.push(25);
	sd.push(24);
	cout << sd.pop()<<endl;
	system("pause");
	return 0;
}