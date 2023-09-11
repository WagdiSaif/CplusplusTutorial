
#pragma once

#include "stdafx.h"

namespace DL {
	template<class D>
	struct NodeDLL
	{
		
		NodeDLL<D>* right;
		NodeDLL<D>* left;
		D data;
		NodeDLL(D value) {
			right = nullptr;
			left = nullptr;
			data = value;
		}
	};
	template<class D1>
	class DoublyLL {

	protected:
		NodeDLL<D1>* front;
		NodeDLL<D1>* rear;
	public:
		void addfront(D1 value);
		void addrear(D1 value);
		DoublyLL():front(nullptr),rear(nullptr) {
		}


	void ViewItems() {

			if (isEmpty()) {
				
				return;
			}
			NodeDLL<D1> * 	temp = getfront();
			

			while (temp != nullptr) {

				std::cout << temp->data << "\n";
				temp = temp->right;
			}


	
		

		}
		bool isEmpty() {
			if (front == nullptr&&rear == nullptr)  return true;
			return false;
		}
		NodeDLL<D1> * getfront() {
			return front;
		}
		NodeDLL<D1> * getrear() {
			return rear;
		}
		~DoublyLL() {
			
			while (front!=nullptr)
			{
				NodeDLL<D1> * tem = front;
				front = front->right;
				if(front!=nullptr)
				front->left = nullptr;
				delete tem;
			}

		}
	};
	template<class D1>
	void DoublyLL<D1>::addfront(D1 value) {
		NodeDLL<D1> * NewNodeDLL = new NodeDLL<D1>(value);
		if (isEmpty()) {
			front = rear = NewNodeDLL;
			return;
		}
		NewNodeDLL->right = front;
		front->left = NewNodeDLL;
		front = NewNodeDLL;


	}
	template<class D1>
	void DoublyLL<D1>::addrear(D1 value) {
		NodeDLL<D1> * NewNodeDLL = new NodeDLL<D1>(value);
		if (isEmpty()) {
			front = rear = NewNodeDLL;
			return;
		}
		NewNodeDLL->left = rear;
		rear->right = NewNodeDLL;
		rear = NewNodeDLL;


	}

}