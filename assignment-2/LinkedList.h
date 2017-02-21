#ifndef GUARD_LINKEDLIST_H
#define GUARD_LINKEDLIST_H
#include "Node.h"
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <string>
#include <vector>

template <class T>
class LinkedList {
protected:
	Node<T>* head;
	std::size_t length;
public:
  void add(T data);
  std::vector<T> to_vec();
  int sum();
  float average();
  LinkedList();
  ~LinkedList();
};

template <class T>
LinkedList<T>::LinkedList() {
	this->head = NULL;
	this->length = 0;
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
		this->length = 0;
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
  ++length;
}

template <class T>
std::vector<T> LinkedList<T>::to_vec(){
	std::vector<T> vec;
	if(this->head){
		Node<T>** current = &head;
		vec.push_back((*current)->getData());
		while((*current)->getNext()){
			current = &(*current)->getNext();
			vec.push_back((*current)->getData());
		}
	}
	return vec;
}

template class LinkedList<int>;
#endif
