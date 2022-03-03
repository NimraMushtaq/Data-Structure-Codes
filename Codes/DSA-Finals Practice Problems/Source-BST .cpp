//#include<iostream>
//#include<queue>
//using namespace std;
//struct node
//{
//	int data;
//	struct node* left;
//	struct node* right;
//};
//
//struct node* createnode(int val)
//
//{
//	struct node* node = (struct node*)malloc(sizeof(struct node));
//
//	node->data = val;
//	node->left =NULL;
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
//void printLevel(node*root) {
//	int level = 0;
//	if (root == NULL) {
//		return;
//	}
//	queue<node*>q;
//	q.push(root);
//	q.push(NULL);
//	while (!q.empty()) 
//	{
//		node* temp = q.front();
//		q.pop();
//		if (temp != NULL) {
//			cout << "Level:" << level << " ";
//			cout << temp->data<<" ";
//			if (temp->left) {
//				q.push(temp->left);
//			}
//			if (temp->right) {
//				q.push(temp->right);
//			}
//		}
//		//if NULL is found it means level has ended so goto next line
//		//if q is not empty and node is NULL
//		else if (!q.empty()) {
//			level++;
//			cout << endl;
//			q.push(NULL);
//		}
//	}
//}
//void nodesAtLevel(node* root,int k) {
//	if (root == NULL) {
//		cout << "\nTree is empty!";
//		return ;
//	}
//	queue<node*>q;
//	q.push(root);
//	q.push(NULL);
//	int level=0;
//	int nodes = 0;
//	while (!q.empty()) {
//		node* temp = q.front();
//		q.pop();
//		if (temp != NULL) {
//			//Total Nodes
//			//nodes++;
//				if (level == k) {
//					nodes++;
//				}
//				if (temp->right) {
//					q.push(temp->right);
//				}
//				if (temp->left) {
//					q.push(temp->left);
//				}
//		}
//		else if (!q.empty()) {
//			q.push(NULL);
//			level++;
//		}
//	}
//	cout << "\nLevel:" << level << " has " << nodes << " nodes";
//}
//int main() {
//	int choice = 0, val, data;
//	node* temp = NULL;
//	cout << "\n********************* implementation of binary tree ******************************";
//	cout << "\n1.insert elements ";
//	cout << "\n2.traverse elements ";
//	cout << "\n3.find minimum ";
//	cout << "\n4.find maximum ";
//	cout << "\n5.delete node  ";
//	cout << "\n6.Print Node on Each Level ";
//	cout << "\n7.Print No of Nodes on Each Level ";
//	cout << "\n8.exit ";
//
//	while (choice != 8) {
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
//			printLevel(temp);
//			break;
//		case 7:
//			cout << "\nEnter level of tree : ";
//			cin >> val;
//			nodesAtLevel(temp,val);
//			break;
//		case 8:
//			exit(0);
//		}
//	}
//	system("pause");
//}
