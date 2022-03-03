//#include<iostream>
//using namespace std;
//struct node
//{
//	int data;
//	struct node* left;
//	struct node* right;
//};
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
//int minValue(struct node* node) {
//	struct node* current = node;
//
//	while (current->left != NULL) {
//		current = current->left;
//	}
//	return(current->data);
//}
//int maxValue(struct node* node) {
//	struct node* current = node;
//
//	while (current->right != NULL) {
//		current = current->right;
//	}
//	return(current->data);
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
//	cout << "\n5.Exit ";
//
//	while (choice != 5) {
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
//		case 3: cout << "\nMinimum : " << minValue(temp);
//			break;
//		case 4: cout << "\nMaximum : " << maxValue(temp);
//			break;
//		case 5:
//			exit(0);
//		}
//	}
//	system("pause");
//}
