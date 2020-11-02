#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer:
// Updated:    10/2019
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>
#include <cassert>
#include <iostream>
////////////////////////////////////////////////////////////////////////////
//
template<typename T>
class Node {

public:
	T data;
	Node<T>* next;

	Node() { next = nullptr; }
	Node(const T& elem) { data = elem; next = nullptr; }

};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//
template <typename T>
class stack {

private:
        Node<T>   *tos;

public:
              stack     () { tos = nullptr; };
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T>);

	bool empty() const {
		return (tos == 0);
	}

	bool full() {
		Node<T>* tmp = new Node<T>;

		if (tmp == nullptr)
			return true;
		delete tmp;

		return false;

	}

	T         top       () const;
	T         pop       ();
	void      push      (const T&);

};


//Copy Constructor
template <typename T>
stack<T>::stack(const stack<T>& s) {
	tos = nullptr;
//	std::cout << "Top of Function" << std::endl;
	Node<T> *tmp = s.tos;
	Node<T> *bottom = nullptr;

	while(tmp != nullptr) {
//		std::cout << "top inside loop" << std::endl;
//		std::cout << tos << std::endl;
		if(tos == nullptr) {
//			std::cout << "inside if statement" << std::endl;
			tos = new Node<T>(tmp->data);
			bottom = tos;
		} else {
			bottom->next = new Node<T>(tmp->data);
			bottom = bottom->next;
		}
//		std::cout << "bottom inside loop" << std::endl;
		tmp = tmp->next;

	}
//	std::cout << "Bottom of function" << std::endl;

}

//swap function
template <typename T>
void stack<T>::swap(stack<T>& s) {
//	std::cout << "inside swap" << std::endl;

	Node<T> *tmp = tos;
        tos = s.tos;
        s.tos = tmp;

//	std::cout << "swap complete" << std::endl;
}


//assignment operator
template <typename T>
stack<T>& stack<T>::operator=(stack<T> s) {
//	std::cout << "Before swap(s) call" << std::endl;

		swap(s);

//	std::cout << "after swap(s) call" << std::endl;

		return *this;

}




//push
template <typename T>
void stack<T>::push(const T& elem) {

	Node<T>* new_node = new Node<T>(elem);
	new_node->next = tos;
	tos = new_node;

}

//pop
template <typename T>
T stack<T>::pop() {
	Node<T>* tmp = tos;
	tos = tos->next; 
	T rlt = tmp->data;

	if(tmp != nullptr)
		delete tmp;

	return rlt;
}

//top
template <typename T>
T stack<T>::top() const {

T rlt = tos -> data;

return rlt;

}


//desctructor
template <typename T>
stack<T>::~stack() {

	Node<T>* tmp;

	while (tos != nullptr) {
		tmp = tos;
		tos = tos->next;
		delete tmp;
	}

}




#endif

