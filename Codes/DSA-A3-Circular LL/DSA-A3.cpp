//#include<iostream>
//using namespace std;
//struct node {
//	int data;
//	node* next;
//};
//struct node* head = NULL;
//struct node* tail = NULL;
//void create(int val) {
//	node* ptr = new node;
//	head = ptr;
//	ptr->data = val;
//	tail = ptr;
//	tail->next = head;
//}
//void insertEnd(int val) {
//	if (head == NULL) {
//		create(val);
//	}
//	else {
//		node* ptr = new node;
//		tail->next = ptr;
//		ptr->data = val;
//		tail = ptr;
//		tail->next = head;
//	}
//}
//void deleteFront() {
//	if (head == NULL) {
//		cout << "\nList is Empty!";
//	}
//	else if (head == tail) {
//		node* temp = head;
//		head = NULL;
//		tail = NULL;
//		free(temp);
//		cout << "\nList Emptied!";
//	}
//	else {
//		node* temp = head;
//		head = temp->next;
//		tail->next = head;
//		free(temp);
//	}
//
//}
//void display() {
//	node* ptr = head;
//	if (head == NULL) {
//		cout << "\nList is Empty!";
//	}
//	else {
//		while (ptr->next != head) {
//			cout << ptr->data << " ";
//			ptr = ptr->next;
//		}
//		cout << ptr->data;
//	}
//}
//void josephus(int m) {
//	node* prev, * current, * temp;
//	prev = head;
//	current = head;
//	while (current->next != current) {
//		int count = 1;
//		if (m == 0) {
//			cout << current->data << " ";
//			deleteFront();
//			current = head;
//		}
//		else {
//			while (count!=m) {
//				prev = current;
//				current = current->next;
//				count++;
//			}
//			temp = current;
//			cout << current->data << " ";
//			if (temp == head) {
//				head = head->next;
//				tail->next = head;
//			}
//			prev->next = current->next;
//			current = prev->next;
//			free(temp);
//
//		}
//	}
//		cout << "\nWinner is " << head->data;
//}
//int main() {
//	int choice = 0;
//	int val, n, pos;
//	cout << "\n######################### CIRCULAR LINKED LIST ################################";
//	cout << "\n1.Insert elements ";
//	cout << "\n2.Display Linked List ";
//	cout << "\n3.Josephus Problem ";
//	cout << "\n4.Exit";
//	while (choice != 4)
//	{
//		cout << "\nEnter your choice ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter no of elements ";
//			cin >> n;
//			cout << "\nEnter data \n";
//			for (int i = 1; i <= n; i++) {
//				cin >> val;
//				insertEnd(val);
//			}
//			break;
//		case 2:
//			cout << "\n-------------DISPLAY-----------------\n";
//			display();
//			break;
//		case 3:
//			cout << "\nJosephus Problem ";
//			cout << "\nEnter value of M : ";
//			cin >> val;
//			cout << endl;
//			josephus(val);
//			break;
//		case 4:
//			exit(0);
//		}
//	}
//
//}