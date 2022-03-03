//#include<iostream>
//using namespace std;
//struct node {
//	int data;
//	node* next;
//	node* prev;
//};
//node* head = NULL;
//node* tail = NULL;
//void createNode(int element) {
//	node* temp = new node;
//	temp->data = element;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//}
//void insertEnd(int val) {
//	if (head == NULL) {
//		createNode(val);
//	}
//	else {
//		node* temp = new node;
//		temp->data = val;
//		temp->next = NULL;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//
//	}
//}
//
//void printFor() {
//	node* ptr;
//	ptr =head;
//	while (ptr != NULL) {
//		cout << ptr->data<<" ";
//		ptr = ptr->next;
//	}
//}
//struct node* reverse(node*current) {
//	if ((current == NULL)||(current->next==NULL)){
//		return current;
//	}
//	else {
//		node* newhead = reverse(current->next);
//		newhead->prev = NULL;
//		node* temp = current->next;
//		temp->next = current;
//		current->prev = temp;
//		current->next = NULL;
//		tail = current;
//		return newhead;
//	}
//	
//}
//
//int main() {
//	int val=0, choice=0;
//	int n;
//
//	cout << "\n----------------------DoublyLinked List implementation of LIST ADT----------------------------------";
//	cout << "\n	1.	Insert elements to List ";
//	cout << "\n	2.	Display Doubly Linked List";
//	cout << "\n	3.	Reverse Doubly Linked List";
//	cout << "\n	4.	Exit";
//	cout << "\n	------------------------------------------------------------------------------------------------------------";
//	while (choice != 4) {
//		cout << "\nPlease Enter Your Choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter no of elements : ";
//			cin >>n;
//			cout << "\nEnter data : \n";
//			for (int i = 1; i <= n; i++) {
//				cin >> val;
//				insertEnd(val);
//			}
//			break;
//		case 2:
//			cout << "\n--------Display-----------\n";
//			printFor();
//			break;
//		case 3:
//			cout << "\n--------Reverse List-----------\n";
//			head=reverse(head);
//			break;
//		case 4:
//			exit(0);
//
//		}
//	}
//
//	return 0;
//
//}
