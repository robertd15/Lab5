#pragma once

template <class T>
class Node {
private:
	T item;
	Node<T> *left, *right;

public:

	Node(T item) {
		this->item = item;
		this->left = this->right = NULL;
	}

	void traverse(Node<T>* root) {
		if (root != NULL) {
			traverse(root->left);
			printf("%d \n", root->item);
			traverse(root->right);
		}
	}

	Node<T>* insert(Node<T> *node, T item) {
		if (node == NULL)
			return newNode(key);

		if (item < node->item)
			node->left = insert(node->left, key);
		else if (item > node->item)
			node->right = insert(node->right, key);

		return node;
	}

	Node<T>* search(Node<T>* root, T item) {
		if (root == NULL || root->item == item)
			return root;

		if (root->item < item)
			return search(root->right, item);

		return search(root->left, item);
	}
};
