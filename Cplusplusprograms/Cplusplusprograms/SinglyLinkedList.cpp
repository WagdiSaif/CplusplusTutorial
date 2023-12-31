#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;
struct Node {
	int info;
	Node *next;
};

class List {


public:
	Node *head;
	List();
	void traverse(Node*);
	void insertAtBeginning(int a);
	void insertAfter(int a, int b);
	
	Node* SearchNode(Node*,int);
	bool IsEmpty() {

		return (head == NULL);
	}
	Node* DeleteFormBegining() {
		head = head->next;
		return head;
	}
	Node* DeleteFormEnd() {

		if (head->next == NULL) { head = NULL; return head; }
		Node* prev = head;
		Node *trav = prev->next;
		
		while (trav->next != NULL){
			prev = prev->next;
		trav = trav->next;

		
		
		}
		prev->next = trav->next;



		return head;
	}
	Node* DeleteFormBetween(int Prevalue) {

			if (head->info == Prevalue&&head->next!=NULL) {
				head->next= head->next->next; return head; }
		
			Node *trav = head;
		
			while (trav->next != NULL&&trav->info!=Prevalue) {
				
				trav = trav->next;


	
				
			}
			if ((trav->next == NULL&&trav->info==Prevalue)||(trav->next == NULL&&trav->info != Prevalue)) {
				return	NULL;
				
			}
			
			trav->next = trav->next->next;
			return head;
		}

};
List::List() {
	head = NULL;
}

Node* List::SearchNode(Node* ListNode,int ValueSearch) {


	Node *search = ListNode;
	while (search->next!=NULL&& search->info!=ValueSearch)
	{
		search = search->next;

	}
	if (search->info == ValueSearch) return search;

	return NULL;

}

void List::insertAtBeginning(int a)
{
	Node *Newnode = new Node;
	Newnode->info = a;
	Newnode->next = NULL;
	if (IsEmpty()) {
		head = Newnode;
		
		return;
	}

	Newnode->next = head;
		head = Newnode;
	

}

void List::insertAfter(int a, int b) {
	Node *node = new Node;
	Node *nodeAfter = new Node;
	nodeAfter->info = b;
	nodeAfter->next = NULL;
	node->next = NULL;
	
	node->info = a;
	if (IsEmpty()) {
		head = node;
		
	}
	Node * search = head;
	while (search->next !=NULL ) {
		
		search = search->next;
	}
	search->next=node;
	search->next->next = nodeAfter;
}

void List::traverse(Node* header) {
	if (IsEmpty()) {
		cout << "Linked list is Empty\n";
		return;
	}

	Node * p = header;
	/*cout << p->info << ", ";*/
	while (p!=NULL) {
		cout <<p->info << "-> ";
		p = p->next;
	}
}



int mainSLL()
{
	List *cll=new List();

	int a, b, ch;
	while (1)
	{
	
		cout << " \n\n\n\n Linked List Operations\n\n 1- It inserts a new node at the beginning of the list.\n 2- It Inserts a new node after a given value.\n 3- Traverse the List. \n 4- Search node by value. \n 5- delete last node .\n 6- Exit\n\n\n Your Choice: ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "\nAdd new value: ";
			cin >> a;
			cll->insertAtBeginning(a);
			break;
		case 2:
			cout << "\nAdd new value: ";
			cin >> a;
			cout << "\nAdd a value to add a new value after new value: ";
			cin >> b;
			cll->insertAfter(a, b);
			break;
		case 3:cout << endl << "Linked List Values:is" << endl;
		
			cll->traverse(cll->head);
			break;
		case 4: {
			cout << "\input value to search node: ";
			cin >> a;
			Node *NodeSearch=cll->SearchNode(cll->head, a);
			if(NodeSearch!=NULL)cout << endl << "The node that you Search is \n" << NodeSearch->info;
			else cout << "\node search no found: ";

		}break;
		case 5: {
			
			cll->traverse(cll->DeleteFormEnd());

		}break;
		case 6: {
			cout << "\input value to of prev  node to delete: ";
			cin >> a;
			Node* ListAfterDelete = cll->DeleteFormBetween(a);
			if(ListAfterDelete==NULL)
				cout << "\n no found node after your enter value node Sorry: ";
			else cll->traverse(ListAfterDelete);
				;

		}break;
		default: exit(0);
		}
	}
	system("pause");
	return 0;
}
