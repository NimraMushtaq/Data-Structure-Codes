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
//void insertBeg(int val) {
//	if (head == NULL) {
//		createNode(val);
//	}
//	else {
//		node* temp = new node;
//		temp->data = val;
//		temp->next = head;
//		temp->prev = NULL;
//		head->prev = temp;
//		head = temp;
//	}
//}
//void deleteBeg() {
//	node* temp;
//	temp = head;
//	if (head == NULL) {
//		cout << "\nStack  Underflow!";
//	}
//	else {
//		if (head->next == NULL) {
//			free(temp);
//			head = NULL;
//			cout << "\nStack is Empty!";
//		}
//		else {
//			head = temp->next;
//			head->prev = NULL;
//			free(temp);
//		}
//
//	}
//}
//
//void printFor() {
//	node* ptr;
//	ptr = head;
//	while (ptr != NULL) {
//		cout << ptr->data << " ";
//		ptr = ptr->next;
//	}
//}
//
//int main() {
//	int val = 0, choice = 0;
//	cout << "\n----------------------DoublyLinked List implementation of STACK----------------------------------";
//	cout << "\n	1.	PUSH an element ";
//	cout << "\n	2.	POP an element ";
//	cout << "\n	3.	Display Stack ";
//	cout << "\n	4.	Exit";
//	cout << "\n	------------------------------------------------------------------------------------------------------------";
//	while (choice != 6) {
//		cout << "\nPlease Enter Your Choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nPUSH";
//			cout << "\nEnter data : ";
//			cin >> val;
//			insertBeg(val);
//			break;
//		case 2:
//			cout << "\nPOP\n";
//			printFor();
//			deleteBeg();
//			break;
//		case 3:
//			cout << "\n-------------------\n";
//			printFor();
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
