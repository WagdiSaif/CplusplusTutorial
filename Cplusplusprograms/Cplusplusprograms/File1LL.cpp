#include "stdafx.h"

#include <iostream>
#include<fstream>
#include <string>
#include <sstream>

#include <stdlib.h>
using namespace std;

#define Path_File "my_info.txt"
#define Bin_path "BinPath.bin"
#define CREATE_NEW_NODE(data) ( new Node(data))
class Node {


public:
	string info;
	Node *next;
	Node(string info) {
		this->info = info;
		this->next = NULL;
	}
};


class MyInfo {


public:
	
	Node *head;
	MyInfo() {
		head = NULL;

	}
	Node* addInfoToList(Node* info) {
		
		if (head == NULL) {
			head = info;
			return head;
			
		}
			Node* temp= head ;
		while (temp->next!= NULL)
		{
			temp = temp->next;
		}
		temp->next = info;

		 return head;

	}

public:
	int counter = 0;


	void ReadFromFileToLinkedListLineByline() {
		

		ifstream read(Path_File);
		try {
			
			if(read.is_open() ){
				string info1;

				int i = 0;
				while (getline(read, info1)) {

					addInfoToList(new Node(info1));


					i++;
					counter++;

				}
			}
			read.close();
		}
		catch (exception& e) {
			cout << "exception when Read From FileTo LinkedList Line By line is :  " << e.what();

		}

	}



	void ReadFromFileToLinkedListWordByWord() {
	 Node* newlist = NULL;
		ifstream readword(Path_File);
		try {
			if (readword.is_open()) {
			
	
			string getword;

		

		
			cout << "count charachars for each  word in file are \t"  << "\n";

			while ((readword >> getword)) {
				
			
				int counter = 0;
				if (getword.back()=='\n')
					cout << "****************************************************************************************************";
				// count character in words
				
					char ch;
				
					istringstream word(getword);
					while (word >> noskipws >> ch) {
					
						
						if (ch == '\n') {
							break;
						}

						counter++;
						
				}
				cout << getword << "==>" << counter  << endl;
			//Read From File To LinkedList Word By Word

				newlist=addInfoToList(new Node(getword));
			

			}
			}//end read from files
			readword.close();
			cout << "\ninformation word By word  and Line By Line in the linkedlist after read its from file is:\n\n\n";

			for (Node* newhead1 = newlist; newhead1 != NULL; newhead1 = newhead1->next) {

				cout <<"->"<< newhead1->info << " ";
			}
		}
		catch (exception& e) {
			cout << "exception when Read From File To LinkedList Word By Word :  " << e.what();
		}



		
	}

	
	void print() {

		cout << "\n\nThe info that we read from file to LinkedList Line By line are\n\n";
		Node *temp = head;
		int countlines = 0;
		while (temp != NULL) {
			cout<<"  "<<countlines+1<<" -> "<< temp->info;

			temp = temp->next;
			countlines++;

		}
	

	}
void 	saveTofiletxt(string text) {
	ofstream save;
	save.open(Path_File, ios::out | ios::app);

	try {
		
			
		save << text+"\n";
		save.close();
		cout << " write to file OK : \n ";
	}
	catch (exception& e) {
		cout << "exception when write to file :  " << e.what();
	}

	}
	void Menue() {

		string txtSave;
		int input;
		while (true) {
			cout << "-->\n1- Add new record\n2-read from file to LList Line BY Line and view\n3-Read From File To LinkedList Word By Word\nAny other key to Exit\n";
			cin >> input;
			if (input ==1) {
				cout << "Enter text:";
				std::cin >> std::ws;
				getline(cin, txtSave,'\n');
				saveTofiletxt(txtSave);
			}
			else if (input == 2) {

				cout << "\n============= FileContent =============\n";
				ReadFromFileToLinkedListLineByline();
				print();
			
			}
			else if (input == 3) {

				cout << "\n============= FileContent =============\n";
				ReadFromFileToLinkedListWordByWord();
				

			}
			//ReadFromFileToLinkedListWordByWord
			else {
				break;
			}
		}
	}
};




int mainfil() {

	
	MyInfo* inf = new MyInfo();
	
	inf->Menue();

	
	delete inf;
	system("pause");
	return 0;
}