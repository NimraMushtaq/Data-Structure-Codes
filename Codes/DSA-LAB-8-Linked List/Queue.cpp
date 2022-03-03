///*
//* In queue both the enqueue and dequeue operations must be of O(1)
//* 
//*/
//#include<iostream>
//using namespace std;
//#include<iostream>
//using namespace std;
//int token = 99;
//struct node {
//	int info;
//	node* next;
//};
//node* front = NULL;
//node* rear = NULL;
//void enqueue(int data) {
//	node* temp = new node;
//	temp->info = data;
//	temp->next = NULL;
//	if (front == NULL && rear == NULL) {
//		cout << "\nPatient Enqueued Token: " << data;
//		front = rear = temp;
//	}
//	else {
//		cout << "\nPatient Enqueued Token: "<<data;
//		rear->next = temp;
//		rear = temp;
//	}
//}
//void dequeue() {
//	node* temp;
//	temp = front;
//	if (front == NULL && rear == NULL) {
//		cout << "\nQueue is Empty!";
//	}
//	else if (temp->next == NULL) {
//		free(temp);
//		front = NULL;
//		rear = NULL;
//	}
//	else {
//		cout << "\nPatient Dequeued  ";
//		front = front->next;
//		free(temp);
//	}
//}
//void peek() {
//	node* temp;
//	temp = front;
//	if (front == NULL && rear == NULL) {
//		cout << "\nQueue is Empty!";
//	}
//	else {
//		cout<<"\nPeek "<< temp->info;
//	}
//}
//void display() {
//	node* temp;
//	if (front == 0 && rear == 0) {
//		cout << "\nQueue is Empty!";
//	}
//	else {
//		temp = front;
//		while (temp != NULL) {
//			cout << temp->info;
//			temp = temp->next;
//			cout << endl;
//		}
//	}
//}
//int main() {
//	int element;
//	cout << "\n----------------------Linked List implementation with STACK---------------------------------- -";
//	cout << "\n	1.	Enqueue an element ";
//	cout << "\n	2.	Dequeue an element";
//	cout << "\n	3.	Display List";
//	cout << "\n	4.	Peek Queue";
//	cout << "\n	5.	Exit";
//	cout << "\n	-------------------------------------------------------------------------------------------------------------";
//	int choice = 0;
//	while (choice != 5) {
//		cout << "\nEnter choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			token++;
//			enqueue(token);
//			break;
//		case 2:
//			dequeue();
//			break;
//		case 3:
//			display();
//			break;
//		case 4:
//			peek();
//			break;
//		case 5:
//			exit(0);
//		}
//	}
//	return 0;
//}
