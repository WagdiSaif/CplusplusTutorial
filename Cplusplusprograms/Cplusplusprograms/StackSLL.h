#pragma once
#include "SinglyLL.h"
template<class T>
class StackSLL: private SinglyLL<T>
{
	 int S;
	
public:

	void push(T);
	void DisplayElements();
	T pop();
	bool isEmpty();
	bool isFull();
	void reverse();
	int size();
	StackSLL() :S(0) {}
};




template <class T>
void StackSLL<T>::push(T item) {

	this->add(this->CreateNode(item));
	S++;




}
template <class T>
void StackSLL<T>::DisplayElements() {
	int i = 0;
	//while (i<size())
	//{
	//	std::cout << data[i] << "\n";
	//	i++;
	//}

}
template<class T>
T StackSLL<T>::pop() {
	
	
		
	Node<T>* Element = this->getList();
	
	if (Element==NULL) return NULL;
	
	S--;
	this->head =this->head->next;
	T value = Element->info;
	delete Element;
	return value;
}
template<class T>
bool StackSLL<T>::isEmpty() {

	return (this->head==NULL);
}

template<class T>
int StackSLL<T>::size() {


	return  Siz;
}
template<class T>
void  StackSLL<T>::reverse() {
	

	
}


