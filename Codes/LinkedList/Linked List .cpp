//#include<iostream>
//using namespace std;
//struct node {
//	int info;
//	struct node* next;
//}*start;
//void insertFront(int data) {
//	node* temp;
//	temp = new node;
//	temp->info = data;
//	temp->next = start;
//	start = temp;
//}
//void insertEnd(int data) {
//	node* ptr, * temp;
//	ptr = start;
//	while (1) {
//		if (ptr->next != NULL) {
//			ptr = ptr->next;
//		}
//		else {
//			break;
//		}
//	}
//	temp = new node;
//	temp->info = data;
//	temp->next = NULL;
//	ptr->next = temp;
//}
//void insertPosition(int data, int pos) {
//	node* temp, * ptr;
//	temp = new node;
//	ptr = start;
//
//	for (int i = 1; i < pos-1 ; i++)
//	{
//		if (ptr == NULL)
//		{
//			cout << "Invalid position";
//			return;
//		}
//		ptr = ptr->next;
//	}
//	if (ptr->next == NULL)
//		insertEnd(data);
//	else
//	{
//		temp->info = data;
//		temp->next = ptr->next;
//		ptr->next = temp;
//	}
//
//}
//void createNode(int num) {
//	int data;
//	node* temp;
//	temp = new node;
//	for (int i = 1; i <= num; i++) {
//		if (start == NULL) {
//			cout << "\nEnter data for node : ";
//			cin >> data;
//			temp->info = data;
//			temp->next = NULL;
//			start = temp;
//		}
//		else {
//			cout << "\nEnter data for node : ";
//			cin >> data;
//			insertEnd(data);
//		}
//	}
//}
//void deleteNode(int n) {
//	node* ptr, * current;
//	ptr = start;
//	if (ptr == NULL) {
//	cout << "\nLinked List is Empty";
//	}
//
//	else if (n == 1) {
//		start = ptr->next;
//		free(ptr);
//	}
//	
//	else {
//		for (int i = 1; i < n-1; i++) {
//			ptr = ptr->next;
//		}
//		current = ptr->next;
//		ptr -> next = current->next;
//		free(current);
//	}
//}
//void deleteEnd() {
//	node* ptr, * temp;
//	ptr = start;
//	temp = start;
//	while (ptr->next != NULL) {
//		temp = ptr;
//		ptr = ptr->next;
//	}
//	temp->next = NULL;
//	free(ptr);
//}
//void search() {
//	int pos = 1;
//	int item;
//	node* ptr;
//	ptr = start;
//	cout << "\nEnter data to search : ";
//	cin >> item;
//	while ((ptr->info != item)&&(ptr->next!=NULL)) {
//		ptr = ptr->next;
//		pos++;
//	}
//	if (ptr->info == item) {
//		cout << "\nItem "<<item<<" found at position : "<<pos;
//	}
//	else {
//		cout << "\nItem not found";
//	}
//}
//void display() {
//	node* ptr;
//	ptr = start;
//	if (ptr == NULL) {
//		cout << "\nSingly List Empty! ";
//	}
//	else {
//		while (ptr!= NULL) {
//			cout << "|"<<ptr->info << "," << ptr->next<<"|"<<"-->";
//			ptr = ptr->next;
//		}
//	}
//}
//int main() {
//	int len,data,pos;
//	int choice=0;
//	cout << "\n######################### LINKED LIST ################################";
//	cout << "\n1.Create a Node ";
//	cout << "\n2.Insert at Start ";
//	cout << "\n3.Insert at End ";
//	cout << "\n4.Insert at nth Position ";
//	cout << "\n5.Delete a Node at nth Position";
//	cout << "\n6.Delete the Node at End";
//	cout << "\n7.Display Linked List ";
//	cout << "\n8.Search";
//	cout << "\n9.Exit";
//	while (choice != 9)
//	{
//		cout << "\nEnter your choice ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter length of linked list ";
//			cin >> len;
//			createNode(len);
//			break;
//		case 2:
//			cout << "\nEnter data : ";
//			cin >> data;
//			insertFront(data);
//			break;
//		case 3:
//			cout << "\nEnter data : ";
//			cin >> data;
//			insertEnd(data);
//			break;
//		case 4:
//			cout << "\nEnter position to insert ";
//			cin >> pos;
//			cout << "\nEnter data : ";
//			cin >> data;
//			insertPosition(data,pos);
//			break;
//		case 5:
//			cout << "\nEnter position to insert ";
//			cin >> pos;
//			deleteNode(pos);
//			break;
//		case 6:
//			deleteEnd();
//			break;
//		case 7:display();
//			break;
//		case 8: 
//			search();
//			break;
//
//		}
//
//	}
//	return 0;
//}