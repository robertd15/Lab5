#include <iostream>
#include "Node.h"
#include "Person.h"

using namespace std;

int main() {

	Person *mark = new Person("Mark", "Zuckerberg", "19840514");

	Node<Person> *root = NULL;
	root->insert(root, *mark);

	root->traverse(root);
	system("pause");
	return 0;
}