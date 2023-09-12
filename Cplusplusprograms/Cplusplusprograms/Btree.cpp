
#include "stdafx.h"
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* left, *right;
	Node(int data) {
		this->data = data;
		left = right = NULL;

	}

};
class CreateBTree {


public:
	Node* root;
	CreateBTree() {
		root = NULL;
	}

	Node* createNode(int data) {
		Node* node = new Node(data);
		return node;
	}
	Node* addNodeAtLeve(int *arr, Node* root, int count, int Lenght) {
		if (count <Lenght) {
			Node* temp = createNode(arr[count]);
			root = temp;
			root->left = addNodeAtLeve(arr, root->left, 2 * count + 1, Lenght);
			root->right = addNodeAtLeve(arr, root->right, 2 * count + 2, Lenght);
		}
		return root;
	}
	void LevelrderTrav(Node* root) {
		if (root != NULL) {
			cout << root->data << " ";
			LevelrderTrav(root->left);
			LevelrderTrav(root->right);
		}
	}
};
int mainBtA() {
	CreateBTree *bt = new CreateBTree();
	int *arr = new int[14]{ 7,8,9,10,11,12,13,14,1,2, 3, 4, 5, 6 };
	cout << "Level traversal of created tree: \n";
	bt->LevelrderTrav(bt->addNodeAtLeve(arr, bt->root, 0, 14));
	cout << " \n";
	system("pause");
	return 0;
}