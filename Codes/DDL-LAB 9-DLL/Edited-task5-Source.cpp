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
//void deleteEnd() {
//	node* temp, * ptr;
//	if (head == tail) {
//		temp = head;
//		head = NULL;
//		tail = NULL;
//		free(temp);
//		cout << "\nList is Empty!";
//	}
//	else {
//		temp = tail;
//		ptr = temp->prev;
//		ptr->next = NULL;
//		tail = ptr;
//		free(temp);
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
//void insertionSort() {
//	node* i, * j;
//	node* curr = {}, * inc;
//	i = head;
//	int key;
//	i = i->next;
//	while (i != NULL) {
//		key = i->data;
//		j = i->prev;
//		while ((j != NULL) && ((j->data) > (key))) {
//			curr = j;
//			inc = j->next;
//			inc->data = curr->data;
//			j = j->prev;
//		}
//		if (j == NULL) {
//			j = curr;
//			j->data = key;
//			i = i->next;
//		}
//		else {
//			j = j->next;
//			j->data = key;
//			i = i->next;
//		}
//	}
//}
//int main() {
//	int val = 0, choice = 0;
//	int n;
//
//	cout << "\n----------------------DoublyLinked List implementation of LIST ADT----------------------------------";
//	cout << "\n	1.	Insert  elements ";
//	cout << "\n	2.	Print Double Linked List ";
//	cout << "\n	3.	Delete an element from end";
//	cout << "\n	4.	Apply Insertion Sort";
//	cout << "\n	5.	Exit";
//	cout << "\n	------------------------------------------------------------------------------------------------------------";
//	while (choice != 5) {
//		cout << "\nPlease Enter Your Choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter no of elements to insert : ";
//			cin >> n;
//			for (int i = 1; i <= n; i++) {
//				cout << "\nEnter data : ";
//				cin >> val;
//				insertEnd(val);
//			}
//			break;
//		case 2:
//			cout << "\n--------Display-----------\n";
//			printFor();
//			break;
//		case 3:
//			deleteEnd();
//			break;
//		case 4:
//			cout << "\n--------Insertion Sort-----------\n";
//			insertionSort();
//			cout << "\n--------Display-----------\n";
//			printFor();
//		case 5:
//			exit(0);
//
//		}
//	}
//
//	return 0;
//
//}
