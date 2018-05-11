#pragma once
template <class Node>
class LinkedList
{
public:
	Node *head;
	void addAtFront(Node *n);
	bool isEmpty();
	void addAtEnd(Node *n);
	Node *search(int k);
	Node *deleteNode(int x);
	Node *getLastNode();
	Node* sort_list(Node* head);


	LinkedList();
	
};

template<class Node> 
void LinkedList<Node>::addAtFront(Node * n)
{
	n->next = head;
	head = n;
}

template<class Node>
bool LinkedList<Node>::isEmpty()
{
	if (head == NULL) return true;
	else return false;
}

template<class Node>
void LinkedList<Node>::addAtEnd(Node *n)
{
	if (head == NULL) {
		head = n;
		n->next = NULL;
	}
	else {
		Node *n2 = getLastNode();
		n2->next = n;
	}
}

template<class Node>
Node *LinkedList<Node>::search(int k)
{
	Node* ptr = head;
	while (ptr != NULL && ptr->data != k) {
		ptr = ptr->next;
	}
	return ptr;
}

template<class Node>
Node * LinkedList<Node>::deleteNode(int x)
{
	Node *n = search(x);
	Node *ptr = head;
	if (ptr == n) {
		ptr->next = n->next;
		return n;
	}
	else {
		while (ptr->next != n) ptr = ptr->next;
		ptr->next = n->next;
		return n;
	}
}

template<class Node>
Node * LinkedList<Node>::getLastNode()
{
	Node* ptr = head;
	while (ptr->next != NULL) ptr = ptr->next;
	return ptr;
}

template<class Node>
Node * LinkedList<Node>::sort_list(Node * head)
{
	Node *top = nullptr; // first Node we will return this value
	Node *current = nullptr;
	bool sorted = false;
	while (sorted == false) {
		// we are going to look for the lowest value in the list
		Node *parent = head;
		Node *lowparent = head; // we need this because list is only linked forward
		Node *low = head; // this will end up with the lowest Node
		sorted = true;
		do {
			// find the lowest valued key
			Node* next = parent->next;
			if (parent->data > next->data) {
				lowparent = parent;
				low = next;
				sorted = false;
			}
			parent = parent->next;
		} while (parent->next != nullptr);
		if (current != nullptr) { // first time current == nullptr
			current->next = low;
		}
		// remove the lowest item from the list and reconnect the list
		// basically you are forming two lists, one with the sorted Nodes 
		// and one with the remaining unsorted Nodes
		current = low;
		if (current == head) { head = current->next; }
		lowparent->next = low->next;
		current->next = nullptr;
		if (top == nullptr) {
			top = current;
		}
	};
	current->next = head;
	return top;

}

template<class Node>
inline LinkedList<Node>::LinkedList()
{
	head = NULL;
}
