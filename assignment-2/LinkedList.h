#ifndef GUARD_LINKEDLIST_H
#define GUARD_LINKEDLIST_H
#include "Node.h"
#include <iostream>
#include <cstdlib>

template <class T>
class LinkedList {
public:
  Node<T>* head;
  void add(T data);
  void print();
  LinkedList();
  ~LinkedList();
};

template <class T>
LinkedList<T>::LinkedList() {
	this->head = NULL;
}

template <class T>
LinkedList<T>::~LinkedList() {
	if (this->head) {
		Node<T>* current = head;
		Node<T>* next = current->getNext();
		delete current;
		while (next) {
			current = next;
			next = current->getNext();
			delete current;
		}
		head = NULL;
	}
}


template <class T>
void LinkedList<T>::add(T data){
  if(!this->head){
    this->head = new Node<T>(data);
  } else {
    Node<T>** current = &head;
    while((*current)->getNext()){
      current = &(*current)->getNext();
    }
    (*current)->setNext(new Node<T>(data));
  }
}

template <class T>
void LinkedList<T>::print(){
  if(this->head){
    Node<T>** current = &head;
	std::cout << (*current)->getData() << ", ";
    while((*current)->getNext()){
      current = &(*current)->getNext();
	  std::cout << (*current)->getData() << ", ";
    }
	std::cout << " " << std::endl;
  }
}


template class LinkedList<int>;
#endif
