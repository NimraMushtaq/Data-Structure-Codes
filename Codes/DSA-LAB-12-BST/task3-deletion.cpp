//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	struct node* left;
//	struct node* right;
//};
//
//struct node* createnode(int data)
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
//	if (node == NULL) return createnode(key);
//	if (key < node->data)
//		node->left = insert(node->left, key);
//	else
//		node->right = insert(node->right, key);
//	return node;
//}
//
//void preorder(struct node* node)
//{
//	if (node == NULL)
//		return;
//	cout << node->data << " ";
//	preorder(node->left);
//	preorder(node->right);
//}
//void inorder(struct node* node)
//{
//	if (node == NULL)
//		return;
//	inorder(node->left);
//	cout << node->data << " ";
//	inorder(node->right);
//}
//void postorder(struct node* node)
//{
//	if (node == NULL)
//		return;
//	postorder(node->left);
//	postorder(node->right);
//	cout << node->data << " ";
//}
//struct node* minvalue(struct node* node) {
//	struct node* current = node;
//
//	while (current->left != NULL) {
//		current = current->left;
//	}
//	return(current);
//}
//struct node* maxvalue(struct node* node) {
//	struct node* current = node;
//
//	while (current->right != NULL) {
//		current = current->right;
//	}
//	return(current);
//}
//struct node* deletenode(struct node* root,int key) {
//	//base case
//	if (root == NULL) {
//		return root;
//	}
//	else if (key < root->data) {
//				root->left = deletenode(root->left, key);
//				//return node;
//	}
//	else if (key > root->data) {
//				root->right = deletenode(root->right, key);
//				//return node;
//	}
//	else {
//		//case 1 : one child
//			if (root->left == NULL) {
//			struct node* temp = root->right;
//			free(root);
//			return temp;
//			}
//			else if (root->right == NULL) {
//			struct node* temp = root->left;
//			free(root);
//			return temp;
//			}
//		//case 2 : no child
//			else if ((root->right == NULL) && (root->left == NULL))
//			{
//			free(root);
//			}
//		//case 3 : two children
//			else {
//			struct node* temp = minvalue(root->right);
//			root->data = temp->data;
//			root->right = deletenode(root->right, temp->data);
//			}
//	}
//	return root;
//}
//
//int main() {
//	int choice = 0, val, data;
//	node* temp = NULL;
//	cout << "\n********************* implementation of binary tree ******************************";
//	cout << "\n1.insert elements ";
//	cout << "\n2.traverse elements ";
//	cout << "\n3.find minimum ";
//	cout << "\n4.find maximum ";
//	cout << "\n5.delete node  ";
//	cout << "\n6.exit ";
//
//	while (choice != 6) {
//		cout << "\nenter choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1: cout << "\nenter no of elements to insert : ";
//			cin >> val;
//			cout << "\nenter data : \n";
//			for (int i = 1; i <= val; i++) {
//				cin >> data;
//				temp = insert(temp, data);
//			}
//			break;
//		case 2: cout << "\ntraversal:";
//			cout << "\npreorder : ";
//			preorder(temp);
//			cout << "\ninorder : ";
//			inorder(temp);
//			cout << "\npostorder : ";
//			postorder(temp);
//			break;
//		case 3: cout << "\nminimum : " << minvalue(temp)->data;
//			break;
//		case 4: cout << "\nmaximum : " << maxvalue(temp)->data;
//			break;
//		case 5:
//		    cout << "\nenter data : ";
//			cin >> val;
//			temp=deletenode(temp,val);
//			break;
//		case 6:
//			exit(0);
//		}
//	}
//	system("pause");
//}
