#pragma once



#include "stdafx.h"

	template<class T1>
	struct Node {
		T1 info;
		Node<T1> *next;
		Node() {
			next = NULL;
			info = NULL;
		}
	};


template<class T2>
class   SinglyLL
{




	private:
		Node<T2>* head;
protected:

		SinglyLL()

		{
			/*std::cout << "hello head";*/
			head = NULL;
		}


		~SinglyLL()
		{
			
			while (head != NULL)

			{
				Node<T2>* temp = head;
				head = head->next;
				delete temp;
			}
		}
		void setHead(Node<T2>* head) {
			this->head = head;
		}
		Node<T2>* CreateNode(T2 data) {
			Node<T2>* NewNode = new  Node<T2>();
			NewNode->info = data;

			return NewNode;

		}


		void add(Node<T2>* NewNode) {

			if (head == NULL) {
				head = NewNode;
				return;
			}
			NewNode->next = head;
			head = NewNode;


		}
		Node<T2> *  gethead() {
			return head;
		}

	};

