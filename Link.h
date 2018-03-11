#pragma once
#include "Node.h"

#include <iostream>

template<class T>
class Link {
private:
	Node<T> *head;    // Pointer to first node
	Node<T> *tail;
	int count;        // Current count of items

public:
	Link() {
		head = nullptr;
		tail = nullptr;
		count = 0;
	}

	virtual ~Link() {

	}

	int getCount() const
	{
		return count;
	}

	void setCount(int num) {
		count = num;
	}

	bool isEmpty() const
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	void add(const T& newEntry)
	{
		Node<T> *temp = new Node<T>(newEntry);

		if (isEmpty()) {
			head = temp;
			tail = temp;
		}
		else {
			tail->setNext(temp);
			tail = temp;
		}
		count++;
	}

	bool remove(const T& anEntry)
	{
		Node<T> *prev = head;
		Node<T> *current = head->getNext();

		while (current != NULL) {
			if (current->getItem() == anEntry) {
				break;
			}
			else {    // Continue to the next node
				prev = current;
				current = current->getNext();
			}
		}
		if (current == NULL) {
			// Either list is empty or we reached the end not found
		}
		else {    // Deleting current
			prev->setNext(current->getNext());
			delete current;
			current = NULL;
			count--;
			return true;
		}
		return false;
	}

	void clear()
	{
		Node<T> *current = head;
		Node<T> *next = new Node<T>();

		while (current != NULL) {
			next = current->getNext();
			delete current;
			current = next;
		}
		head = nullptr;
		count = 0;
	}

	bool contains(const T& anEntry) const
	{
		Node<T> *current = head;
		Node<T> *next = current->getNext();
		Node<T> *find = new Node<T>(anEntry);

		while (current != NULL) {
			if (current->getItem() == find->getItem()) {
				delete current;
				return true;
			}
			else
				current->setItem(next->getItem());
		}
		delete current;
		return false;
	}

	void print() {    // try to print each amount of each object here
		Node<T>* temp = new Node<T>();
		temp = head;
		while (temp != nullptr)
		{
			std::cout << temp->getItem() << std::endl;
			temp = temp->getNext();
		}
	}
};
