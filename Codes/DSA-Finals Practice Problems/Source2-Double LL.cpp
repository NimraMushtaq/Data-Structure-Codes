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
//void insertPos(int pos, int val) {
//	if (head == NULL) {
//		cout << "\nLinked List not Created ";
//		return;
//	}
//	else {
//		node* temp,*temp2;
//		node* ptr;
//		ptr = head;
//		for (int i = 1; i <pos; i++) {
//			ptr = ptr->next;
//			if (ptr == NULL) {
//				cout << "Invalid Node";
//				return;
//			}
//		}
//		temp = new node;
//		temp->data = val;
//		if (ptr->next == NULL) {
//			insertEnd(val);
//		}
//		else
//		{
//			temp2 = ptr->next;
//			temp->next = temp2;
//			temp2->prev = temp;
//			ptr->next = temp;
//			temp->prev = ptr;
//		}
//
//	}
//}
//void deleteEnd() {
//	node* temp, *ptr;
//	temp = tail;
//	ptr = temp->prev;
//	ptr->next = NULL;
//	tail = ptr;
//	free(temp);
//}
//void deleteBeg() {
//	node* temp;
//	temp = head;
//	if (head == NULL) {
//		cout << "\nList is Empty!";
//	}
//	else {
//		if (head->next == NULL) {
//			free(temp);
//			head = NULL;
//		}
//		else {
//			head = temp->next;
//			head->prev = NULL;
//			free(temp);
//		}
//
//	}
//}
//void deletePos(int val)
//{
//	struct node* ptr, * temp, * temp2;
//	ptr = head;
//	while ((ptr->data != val) && (ptr != NULL))
//	{
//		ptr = ptr->next;
//	}
//	if (ptr == NULL) {
//		cout << "\nElement is not found!";
//	}
//	else
//	{
//		if (ptr->data == val) {
//			temp = ptr->prev;
//			temp2 = ptr->next;
//			temp->next = temp2;
//			temp2->prev = temp;
//			free(ptr);
//		}
//	}
//}
//
//void printFor() {
//	node* ptr;
//	ptr = head;
//	while (ptr != NULL) {
//		cout << ptr->data<<" ";
//		ptr = ptr->next;
//	}
//}
//void printBack() {
//	node* ptr;
//	ptr = tail;
//	while (ptr != NULL) {
//		cout << ptr->data<<" ";
//		ptr = ptr->prev;
//	}
//}
//void search(int val) {
//	node* temp;
//	temp = head;
//	while ((temp != NULL)&& (temp->data != val)){
//			temp = temp->next;
//	}
//	if (temp->data != val) {
//		cout << "\nItem not Found!";
//	}
//	else {
//		cout << "\nItem Found!";
//	}
//}
//void SortAscend() {
//	node* ptr, * cpt;
//	int temp;
//	ptr = head;
//  //Selection Sort
//	while (ptr->next != NULL) {
//		cpt = ptr->next;
//		while (cpt != NULL) {
//			if (ptr->data > cpt->data) {
//				temp = ptr->data;
//				ptr->data = cpt->data;
//				cpt->data = temp;
//
//			}
//			cpt = cpt->next;
//		}
//		ptr = ptr->next;
//	}
//
//}
//void SortDescend() {
//	node* ptr, * cpt;
//	int temp;
//	ptr = head;
//	//Selection Sort
//	while (ptr->next != NULL) {
//		cpt = ptr->next;
//		while (cpt != NULL) {
//			if (ptr->data < cpt->data) {
//				temp = ptr->data;
//				ptr->data = cpt->data;
//				cpt->data = temp;
//
//			}
//			cpt = cpt->next;
//		}
//		ptr = ptr->next;
//	}
//}
//int main() {
//	int val=0, choice=0;
//	int pos;
//
//	cout << "\n----------------------DoublyLinked List implementation of LIST ADT----------------------------------";
//	cout << "\n	1.	Insert an  element at the end.";
//	cout << "\n	2.	Insert an element at the start.";
//	cout << "\n	3.	Insert the element at any position.";
//	cout << "\n	4.	Display List";
//	cout << "\n	5.	Delete an element from end";
//	cout << "\n	6.	Delete an element  from the start";
//	cout << "\n	7.	Delete an element by data ";
//	cout << "\n	8.	Sort Ascending Order";
//	cout << "\n	9.	Sort Descending Order";
//	cout << "\n	10.	Exit";
//	cout << "\n	------------------------------------------------------------------------------------------------------------";
//	while (choice != 10) {
//		cout << "\nPlease Enter Your Choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter data : ";
//			cin >> val;
//			insertEnd(val);
//			break;
//		case 2:
//			cout << "\nEnter data : ";
//			cin >> val;
//			insertBeg(val);
//			break;
//		case 3:
//			cout << "\nEnter Pos : ";
//			cin >> pos;
//			cout << "\nEnter data : ";
//			cin >> val;
//			insertPos(pos, val);
//			break;
//		case 4:
//			cout << "\n--------FORWARD-----------\n";
//			printFor();
//			break;
//		case 5:
//			deleteEnd();
//			break;
//		case 6:
//			deleteBeg();
//			break;
//		case 7:
//			cout << "\nEnter data : ";
//			cin >> val;
//			deletePos(val);
//			break;
//		case 8:
//			cout << "\nAsecending Sort\n";
//			SortAscend();
//			printFor();
//			break;
//		case 9:
//			cout << "\nDesecending Sort\n";
//			SortDescend();
//			printFor();
//			break;
//		case 10:
//			exit(0);
//
//		}
//	}
//
//	return 0;
//
//}
