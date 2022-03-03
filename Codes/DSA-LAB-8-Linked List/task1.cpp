//#include<iostream>
//using namespace std;
//struct node {
//	int info;
//	node* next;
//};
//node* start = NULL;
//void insertBeg(int data) {
//	node* temp = new node;
//	temp->info = data;
//	temp->next = start;
//	start = temp;
//
//}
//void insertEnd(int data) {
//	node* temp, * ptr;
//	ptr = start;
//	temp = new node;
//	temp->info = data;
//	temp->next = NULL;
//	if (start == NULL) {
//		start = temp;
//	}
//	else {
//		while (ptr->next != NULL) {
//			ptr = ptr->next;
//		}
//		ptr->next = temp;
//	}
//}
//void insertPos(int pos, int data) {
//	node* ptr, * temp, * temp1;
//	temp1 = new node;
//	temp = start;
//	ptr = start;
//	if (ptr == NULL) {
//		cout << "\nCreate Node first!";
//	}
//	else if (pos == 1) {
//		insertBeg(data);
//	}
//	else {
//		for (int i = 1; i <= pos - 1; i++) {
//			temp = ptr;
//			ptr = ptr->next;
//		}
//		temp1->info = data;
//		temp1->next = ptr;
//		temp->next = temp1;
//	}
//
//}
//void deleteEnd() {
//	node* ptr, * temp;
//	temp = start;
//	ptr = start;
//	if (ptr == NULL) {
//		cout << "\nList is empty!";
//	}
//	else {
//		while (ptr->next != NULL) {
//			temp = ptr;
//			ptr = ptr->next;
//		}
//		temp->next = NULL;
//		free(ptr);
//	}
//}
//void deleteBeg() {
//	node* temp;
//	temp = start;
//	start = temp->next;
//	free(temp);
//}
//void deletePos(int pos) {
//	node* ptr, * temp;
//	ptr = start;
//	temp = start;
//	if (ptr == NULL) {
//		cout << "\nLinked List Empty!";
//	}
//	else if (pos == 1)
//	{
//		deleteBeg();
//		return;
//	}
//	else {
//		for (int i = 1; i <= pos - 1; i++) {
//			temp = ptr;
//			ptr = ptr->next;
//		}
//		temp->next = ptr->next;
//		free(ptr);
//	}
//}
//void search(int data) {
//	node* ptr;
//	ptr = start;
//	while ((ptr->next != NULL) && (ptr->info != data)) {
//		ptr = ptr->next;
//	}
//	if (ptr->info == data) {
//		cout << "\nFound element!";
//	}
//	else {
//		cout << "\nElement not found!!";
//	}
//}
//void display() {
//	node* ptr;
//	ptr = start;
//	if (ptr == NULL) {
//		cout << "\nLinked List Empty!!";
//	}
//	else {
//		while (ptr->next != NULL) {
//			cout << ptr->info << " ";
//			ptr = ptr->next;
//		}
//		cout << ptr->info << " ";
//	}
//}
//int main() {
//	int element;
//	int pos;
//	start = NULL;
//	cout << "\n----------------------Linked List implementation of LIST ADT-----------------------------------";
//	cout << "\n	1.	Insert an element at the end";
//	cout << "\n	2.	Insert an element at the beginning";
//	cout << "\n	3.	Insert element at any position";
//	cout << "\n	4.	Delete an element from end";
//	cout << "\n	5.	Delete an element at the beginning";
//	cout << "\n	6.	Delete an element at any position";
//	cout << "\n	7.	Search an element";
//	cout << "\n	8.	Display List";
//	cout << "\n	9.	Exit";
//	cout << "\n------------------------------------------------------------------------------------------------";
//	int choice = 0;
//	while (choice != 9) {
//		cout << "\nEnter choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter data : ";
//			cin >> element;
//			insertEnd(element);
//			break;
//		case 2:
//			cout << "\nEnter data : ";
//			cin >> element;
//			insertBeg(element);
//			break;
//		case 3:
//			cout << "\nEnter Position : ";
//			cin >> pos;
//			cout << "\nEnter data : ";
//			cin >> element;
//			insertPos(pos, element);
//			break;
//		case 4:
//			deleteEnd();
//			break;
//		case 5:
//			deleteBeg();
//			break;
//		case 6:
//			cout << "\nEnter Position : ";
//			cin >> pos;
//			deletePos(pos);
//			break;
//		case 7:
//			cout << "\nEnter element to search : ";
//			cin >> element;
//			search(element);
//			break;
//		case 8:
//			display();
//			break;
//		case 9:
//			exit(0);
//		}
//	}
//	return 0;
//}
//
