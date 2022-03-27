#include <iostream>
#include <assert.h>
using namespace std;


class LL {
    private:
		class Node {
			public:
				string data;
				Node *next;
				Node() {data = ""; next = nullptr;};
				Node(const string &newdata) {
					data = newdata;
					next = nullptr;
				};
			private:
		};

		Node *head, *tail;
		unsigned num_elements;

	public:
		LL() {head = tail = nullptr; num_elements = 0;};
		bool insert(const string &newdata);
		bool find(const string &data);
		void show();
        void deleteLL();
        void deleteLL_helper(Node *head);
};

bool LL::insert(const string &newdata) {
	if (num_elements == 0) {
		assert(head == nullptr);
		assert(tail == nullptr);
		head = new Node(newdata);		
		tail = head;
		num_elements = 1;
		return true;
	}
	assert(head != nullptr);
	assert(tail != nullptr);
	tail->next = new Node(newdata);
	tail = tail->next;
	num_elements++;
	return true;
}

bool LL::find(const string &data) {
	Node *np = head;
        while (np != nullptr) {
		if (data == np->data)	
			return true;
		np = np->next;
	}
	return false;
}

void LL::show() {
	for (Node *np = head; np != nullptr; np = np->next) 
		cout << np->data << endl;
}




/**
 * Add your implementation for recursively 
 * deleting all of the nodes in a linked list
 * here!
 * 
 * I broke mine up into two functions, one that 
 * handled the deleting, and one that called
 * the deleting function with the target node.
 * 
 * Being able to write this will be very useful
 * if you ever have to prevent memory leaks in a
 * binary search tree.
 * 
 */



void LL::deleteLL(){

}

void LL::deleteLL_helper(Node *n){

}