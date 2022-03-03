//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	struct node* left;
//	struct node* right;
//};
//
//struct node* CreateNode(int data)
//
//{
//	struct node* node = (struct node*)malloc(sizeof(struct node));
//
//	node->data = data;
//	node->left = NULL;
//	node->right = NULL;
//
//	return(node);
//}
//struct node* insert(struct node* node, int key)
//{
//	if (node == NULL) return CreateNode(key);
//	if (key < node->data)
//		node->left = insert(node->left, key);
//	else
//		node->right = insert(node->right, key);
//	return node;
//}
//
//void Preorder(struct node* node)
//{
//	if (node == NULL)
//		return;
//	cout << node->data << " ";
//	Preorder(node->left);
//	Preorder(node->right);
//}
//void Inorder(struct node* node)
//{
//	if (node == NULL)
//		return;
//	Inorder(node->left);
//	cout << node->data << " ";
//	Inorder(node->right);
//}
//void Postorder(struct node* node)
//{
//	if (node == NULL)
//		return;
//	Postorder(node->left);
//	Postorder(node->right);
//	cout << node->data << " ";
//}
//struct node* minValue(struct node* node) {
//	struct node* current = node;
//
//	while (current->left != NULL) {
//		current = current->left;
//	}
//	return(current);
//}
//struct node* maxValue(struct node* node) {
//	struct node* current = node;
//
//	while (current->right != NULL) {
//		current = current->right;
//	}
//	return(current);
//}
//struct node* deleteNode(node* r, int v) {
//	// base case 
//	if (r == NULL) {
//		return NULL;
//	}
//	// If the key to be deleted is smaller than the root's key, 
//	// then it lies in left subtree 
//	else if (v < r->data) {
//		r->left = deleteNode(r->left, v);
//	}
//	// If the key to be deleted is greater than the root's key, 
//	// then it lies in right subtree 
//	else if (v > r->data) {
//		r->right = deleteNode(r->right, v);
//	}
//	// if key is same as root's key, then This is the node to be deleted 
//	else {
//		// node with only one child or no child 
//		if (r->left == NULL) {
//			node* temp = r->right;
//			delete r;
//			return temp;
//		}
//		else if (r->right == NULL) {
//			node* temp = r->left;
//			delete r;
//			return temp;
//		}
//		else {
//			// node with two children: Get the inorder successor (smallest 
//			// in the right subtree) 
//			node* temp = minValue(r->right);
//			// Copy the inorder successor's content to this node 
//			r->data = temp->data;
//			// Delete the inorder successor 
//			r->right = deleteNode(r->right, temp->data);
//			//deleteNode(r->right, temp->value); 
//		}
//	}
//	return r;
//}
//struct node* recursiveSearch(node* r, int val) {
//	if (r == NULL || r->data == val)
//		return r;
//
//	else if (val < r->data)
//		return recursiveSearch(r->left, val);
//
//	else
//		return recursiveSearch(r->right, val);
//}
//
//int main() {
//	int choice = 0, val, data;
//	node* temp = NULL;
//	cout << "\n********************* Implementation of Binary Tree ******************************";
//	cout << "\n1.Insert Elements ";
//	cout << "\n2.Traverse Elements ";
//	cout << "\n3.Find Minimum ";
//	cout << "\n4.Find Maximum ";
//	cout << "\n5.Delete Node  ";
//	cout << "\n6.Exit ";
//
//	while (choice != 6) {
//		cout << "\nEnter choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1: cout << "\nEnter no of elements to insert : ";
//			cin >> val;
//			cout << "\nEnter data : ";
//			for (int i = 1; i <= val; i++) {
//				cin >> data;
//				temp = insert(temp, data);
//			}
//			break;
//		case 2: cout << "\nTRAVERSAL:";
//			cout << "\nPreorder : ";
//			Preorder(temp);
//			cout << "\nInorder : ";
//			Inorder(temp);
//			cout << "\nPostorder : ";
//			Postorder(temp);
//			break;
//		case 3: cout << "\nMinimum : " << minValue(temp)->data;
//			break;
//		case 4: cout << "\nMaximum : " << maxValue(temp)->data;
//			break;
//		case 5:
//			cout << "\nEnter data : ";
//			cin >> val;
//			temp = deleteNode(temp, val);
//			break;
//		case 6:
//			exit(0);
//		}
//	}
//	system("pause");
//}
