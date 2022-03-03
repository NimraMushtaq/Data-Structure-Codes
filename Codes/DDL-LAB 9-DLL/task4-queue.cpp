////Queue is enqueued from rear and dequeued from front
////it uses insertEnd and deleteBeg functions
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
//void deleteBeg() {
//	node* temp;
//	temp = head;
//	if (head == NULL) {
//		cout << "\nQueue  Underflow!";
//	}
//	else {
//		if (head->next == NULL) {
//			free(temp);
//			head = NULL;
//			cout << "\nQueue is Empty!";
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
//void printBack() {
//	node* ptr;
//	ptr = tail;
//	while (ptr != NULL) {
//		cout << ptr->data << " ";
//		ptr = ptr->prev;
//	}
//}
//int main() {
//	int val = 0, choice = 0;
//	cout << "\n----------------------DoublyLinked List implementation of QUEUE----------------------------------";
//	cout << "\n	1.	Enqueue an element ";
//	cout << "\n	2.	Dequeue an element ";
//	cout << "\n	3.	Display Queue ";
//	cout << "\n	4.	Exit";
//	cout << "\n	------------------------------------------------------------------------------------------------------------";
//	while (choice != 4) {
//		cout << "\nPlease Enter Your Choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnqueue";
//			cout << "\nEnter data : ";
//			cin >> val;
//			insertEnd(val);
//			break;
//		case 2:
//			cout << "\nDequeue";
//			deleteBeg();
//			break;
//		case 3:
//			cout << "\n--------Print Queue-----------\n";
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
