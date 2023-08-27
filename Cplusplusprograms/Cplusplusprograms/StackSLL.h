#pragma once
#include "SinglyLL.h"
template<class T>
class StackSLL: protected SinglyLL<T>
{
	 int S;
	
public:

	void push(T);
	void DisplayElements();
	T pop();
	T top();
	bool isEmpty();

	
	int size();
	StackSLL() :S(0) {}
};




template <class T>
void StackSLL<T>::push(T item) {

	this->add(this->CreateNode(item));
	S++;




}
template <class T>
T StackSLL<T>::top() {
	if(isEmpty()) return NULL:
	return this->gethead()->info;




}
template <class T>
void StackSLL<T>::DisplayElements() {
	if (isEmpty()) return;
	int i = 0;
	Node<T>* vist = this->gethead();
	while (i<size())
	{
		std::cout <<vist->info << " ";
		vist = vist->next;

		i++;
	}

}
template<class T>
T StackSLL<T>::pop() {
	
	
		
	Node<T>* Element = this->gethead();
	
	if (Element==NULL) return NULL;
	
	S--;
	this->setHead(this->gethead()->next);

	T value = Element->info;
	delete Element;
	return value;
}
template<class T>
bool StackSLL<T>::isEmpty() {

	return (this->gethead()==NULL);
}

template<class T>
int StackSLL<T>::size() {


	return  S;
}



