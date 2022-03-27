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

void LL::deleteLL(){
    deleteLL_helper(head);
    head = nullptr;
}

void LL::deleteLL_helper(Node *n){
    // base case
    if (n == NULL){
        return;
    }

    // advances n along the list
    deleteLL_helper(n->next);

    // after all the other nodes after this one
    // have been deleted, delete this one
    delete n;
}