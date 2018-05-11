#pragma once
template <class T>
class LinkedList
{
public:
	T *head;
	void addAtFront(T *n);
	bool isEmpty();
	void addAtEnd(T *n);
	T *search(int k);
	T *deleteT(int x);
	T *getLastT();


	LinkedList();
	
};

template<class T> 
void LinkedList<T>::addAtFront(T * n)
{
	n->next = head;
	head = n;
}

template<class T>
bool LinkedList<T>::isEmpty()
{
	if (head == NULL) return true;
	else return false;
}

template<class T>
void LinkedList<T>::addAtEnd(T *n)
{
	if (head == NULL) {
		head = n;
		n->next = NULL;
	}
	else {
		T *n2 = getLastT();
		n2->next = n;
	}
}

template<class T>
T * LinkedList<T>::search(int k)
{
	T* ptr = head;
	while (ptr != NULL && ptr->data != k) {
		ptr = ptr->next;
	}
	return ptr;
}

template<class T>
T * LinkedList<T>::deleteT(int x)
{
	T *n = search(x);
	T *ptr = head;
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

template<class T>
T * LinkedList<T>::getLastT()
{
	T* ptr = head;
	while (ptr->next != NULL) ptr = ptr->next;
	return ptr;
}

template<class T>
inline LinkedList<T>::LinkedList()
{
	head = NULL;
}
