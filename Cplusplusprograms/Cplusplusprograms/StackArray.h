#include "stdafx.h"
#include<string>
#include<iostream>

namespace str {
	template<class T>
	class ArrayStack
	{
	private:
		int top;
		T* data;
		int capacity;
	public:
		ArrayStack();
		ArrayStack(int Size);
		void push(T);
		void printStack();
		T pop();
		bool isEmpty();
		bool isFull();
		int size();
		T Top();
		void reverse();
		~ArrayStack();

	};

	
	template<class T>
	ArrayStack<T>::ArrayStack(int Size) : capacity(Size),top(-1){
		
		data = new T[Size];
	
		
	}
	template<class T>
	ArrayStack<T>::ArrayStack() :top(-1) {


	}

	
	template <class T> 
	 void ArrayStack<T>::push(T item) {
	
		 if (isFull()) {
		 std::cout<< "stack overfllow ";
			 return;
		 }
		
		data[++top] =item;


	}
template <class T>
T ArrayStack<T>::Top() {

		 if (isEmpty()) return NULL;

		 data[top];


	 }
	 template <class T>
	 void ArrayStack<T>::printStack() {
		 int i = 0;
		 while (i<size())
		 {
			 std::cout << data[i] << "\n";
			 i++;
		 }

	 }
	template<class T>
	T ArrayStack<T>::pop() {
		if (isEmpty()) return NULL;
		T Element = data[top];
		data[top] = NULL;
		--top;
		return Element;

		

	}
	template<class T>
	bool ArrayStack<T>::isEmpty() {

		return (top == -1);
	}
	template<class T>
	bool ArrayStack<T>::isFull() {

		return (top+1==capacity);
	}
	template<class T>
	int ArrayStack<T>::size() {
		

		return top+1;
	}
	template<class T>
	void  ArrayStack<T>::reverse() {
		if (isEmpty()) return;
		ArrayStack<T> temp(this->capacity);
		for (int i = 0; i<this->capacity; i++)
			temp.push(data[i]);
		

		for (int i = 0;i<(temp.capacity); i++)
			data[i] = temp.pop();
		
	
		
		
		


	}
	template<class T>
	ArrayStack<T>::~ArrayStack() {


		delete[] data;
	}
}