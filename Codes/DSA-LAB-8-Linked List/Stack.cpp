//#include<iostream>
//using namespace std;
//#include<iostream>
//int top = 0,n=5;
//using namespace std;
//struct node {
//	int info;
//	node* next;
//};
//node* start = NULL;
//void push(int data) {
//		node* temp = new node;
//		temp->info = data;
//		temp->next = start;
//		start = temp;
//		cout << "\nPush "<<data;
//}
//void pop() {
//	if (start == NULL) {
//		cout << "\nStack is Empty!";
//	}
//	else {
//		node* temp;
//		temp = start;
//		start = temp->next;
//		cout << "\nPop "<<temp->info;
//		free(temp);
//	}
//}
//void peek() {
//	if (start == NULL) {
//		cout << "\nStack is Empty!";
//	}
//	else {
//		cout << "\nPeek "<<start->info;
//		cout << endl;
//	}
//}
//void display() {
//	node* ptr;
//	ptr = start;
//	if (start == NULL) {
//		cout << "\nLinked List Empty!!";
//	}
//	else {
//		while (ptr!= NULL) {
//			cout << ptr->info << " ";
//			ptr = ptr->next;
//			cout << endl;
//		}
//	}
//}
//int main() {
//	int element;
//	int pos;
//	start = NULL;
//	cout << "\n----------------------Linked List implementation with STACK---------------------------------- -";
//	cout << "\n	1.	Push an element ";
//	cout << "\n	2.	Pop an element";
//	cout << "\n	3.	Peak Stack";
//	cout << "\n	4.	Display List";
//	cout << "\n	5.	Exit";
//	cout << "\n	-------------------------------------------------------------------------------------------------------------";
//	int choice = 0;
//	while (choice != 5) {
//		cout << "\nEnter choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter data : ";
//			cin >> element;
//			push(element);
//			break;
//		case 2:
//			pop();
//			break;
//		case 3:
//			peek();
//			break;
//		case 4:
//			display();
//			break;
//		case 5:
//			exit(0);
//		}
//	}
//	return 0;
//}
