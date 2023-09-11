#pragma once

#include "stdafx.h"

namespace DL {
	template<class Q>
	class Qeue: protected DoublyLL<Q>{


	public:
		void Enqeue(Q data);
		Q Deqeue();
		

	};
	template<class Q>
void Qeue<Q>::Enqeue(Q data) {
		this->addrear(data);


	}
template<class Q>
Q Qeue<Q>::Deqeue() {
	if (this->isEmpty()) return NULL;
	NodeDLL<Q>* getfr = this->getfront();
	Q data = getfr->data;
	this->front = this->front->right;
	if (this->front == nullptr) this->front = this->rear = nullptr;//why this?:because if front is nullptr mean front have no pointer to left;
	else this->front->left = nullptr;
	delete getfr;
	return data;




}
}