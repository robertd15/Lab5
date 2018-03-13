#include <iostream>
#include "BST.h"
#include "Person.h"

using namespace std;

int main() {

	Person *mark = new Person("Mark", "Zuckerberg", "19840514");
	Person *bill = new Person("Bill", "Gates", "19551028");
	Person *steve = new Person("Steve", "Jobs", "19550224");

	/*
	BST<Person> *root = new BST<Person>();
	root->add(*mark);
	root->add(*bill);
	root->add(*steve);
	*/
	//cout << *mark;

	//root->print();

	BST<int> t;
	t.insert(20);
	t.insert(25);
	t.insert(15);
	t.insert(10);
	t.insert(30);
	t.display();
	t.remove(20);
	t.display();
	t.remove(25);
	t.display();
	t.remove(30);
	t.display();

	system("pause");
	return 0;
}
