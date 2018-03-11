#pragma once

template <class T>
class Node {
private:
	T item;
	Node<T>* next;

public:
	Node() {
		next = nullptr;
	}

	Node(const T& anItem)
	{
		item = anItem;
		next = nullptr;
	}    // end constructor

	Node(const T& anItem,
		Node<T> *nextNodePtr) :
		item(anItem),
		next(nextNodePtr)
	{

	} // end constructor

	Node(const Node& copy)
	{
		item = copy.item;
		next = copy.next;
	}

	virtual ~Node()
	{
	}

	void setItem(const T& anItem)
	{
		item = anItem;
	}    // end setItem

	void setNext(Node<T>* nextNodePtr)
	{
		next = nextNodePtr;
	}    //end setNext

	T getItem()
	{
		return item;
	}    //end getItem

	Node<T>* getNext() const
	{
		return next;
	}    //end getNext

	friend std::ostream& operator << (std::ostream &ostream, Node<T> outNode)
	{
		ostream << outNode.item;
		return ostream;
	}
};
