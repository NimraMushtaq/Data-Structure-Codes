//#include<iostream>
//using namespace std;
//struct node {
//	int info;
//	node* next;
//};
//node* start = NULL;
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
//
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
//void reversePrint(node* temp) {
//	if (temp == NULL) {
//		return ;
//	}
//	else {
//		reversePrint(temp->next);
//		cout << temp->info << " ";
//	}
//}
//void reverseList(node* p) {
//
//	if (p->next == NULL) {
//		start = p;
//		return ;
//	}
//	else {
//		reverseList(p->next);
//		node* q = p->next;
//		q->next = p;
//		p->next = NULL;
//	}
//}
////struct node* reverseList(node* head) {
////
////	if ((head->next == NULL)||(head==NULL)) {
////		return head;
////	}
////	else {
////		node*newhead=reverseList(head->next);
////		node* headNext = head -> next;
////		headNext->next = head;
////		cout << "\nhead" << head->info;
////		cout << "\nheadNext:" << headNext->info;
////	    cout << "\nheadNext->next:= head";
////		head->next = NULL;
////		cout <<"\nnewhead : "<< newhead->info;
////		return newhead;
////	}
////}
//int main() {
//	int element;
//	int pos;
//	start = NULL;
//	cout << "\n----------------------Linked List implementation of LIST ADT-----------------------------------";
//	cout << "\n	1.	Insert an element at the end";
//	cout << "\n	2.	Delete an element from end";
//	cout << "\n	3.	Display List";
//	cout << "\n	4.	Reverse Linked List";
//	cout << "\n	5.	Reverse Linked List Print";
//	cout << "\n	6.	Exit";
//	cout << "\n------------------------------------------------------------------------------------------------";
//	int choice = 0;
//	while (choice != 6) {
//		cout << "\nEnter choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter data : ";
//			cin >> element;
//			insertEnd(element);
//			break;
//		case 2:
//			deleteEnd();
//			break;
//		case 3:
//			display();
//			break;
//		case 4:
//			//start=reverseList(start);
//			reverseList(start);
//			break;
//		case 5:
//			reversePrint(start);
//			break;
//		case 6:
//			exit(0);
//		}
//	}
//	return 0;
//}
//
