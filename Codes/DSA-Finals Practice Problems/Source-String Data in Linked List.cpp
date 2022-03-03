//#include<iostream>
//#include<string.h>  
//using namespace std;
//struct node {
//	string data;
//	node* next;
//	node* prev;
//};
//node* head = NULL;
//node* tail = NULL;
//void createNode(string element) {
//	node* temp = new node;
//	temp->data = element;
//	temp->next = NULL;
//	temp->prev = NULL;
//	head = temp;
//	tail = temp;
//}
//void insertEnd(string val) {
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
//void insertBeg(string val) {
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
//
//void insertPos(int pos, string val) {
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
////void SearchRecord()
////{
////	string n;
////	int check = 0;
////	node* temp = head;
////	cout << "\nWhich record you want to search? ";
////	cin >> n;
////	while (temp != NULL)
////	{
////		if (temp->name == n)
////		{
////			cout << "\nName found\n";
////			check = 1;
////			return;
////		}
////	}
////	if (check == 0)
////	{
////		cout << "Not found";
////		return;
////	}
////}
//
//void deletePos(int pos)
//{
//	struct node* ptr, * temp, * temp2;
//	ptr = head;
//	for (int i = 0; i < pos; i++) {
//		ptr = ptr->next;
//	}
//	        temp = ptr->prev;
//			temp2 = ptr->next;
//			temp->next = temp2;
//			temp2->prev = temp;
//			free(ptr);
//	//while ((ptr->data != val) && (ptr != NULL))
//	//{
//	//	ptr = ptr->next;
//	//}
//	//if (ptr == NULL) {
//	//	cout << "\nElement is not found!";
//	//}
//	//else
//	//{
//	//	if (ptr->data == val) {
//	//		temp = ptr->prev;
//	//		temp2 = ptr->next;
//	//		temp->next = temp2;
//	//		temp2->prev = temp;
//	//		free(ptr);
//	//	}
//	//}
//
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
//		cout << ptr->data<<" ";
//		ptr = ptr->prev;
//	}
//}
//int search(string val) {
//	node* temp;
//	temp = head;
//	while ((temp->next!= NULL) && (temp->data != val)){
//			temp = temp->next;
//	}
//	if (temp->data != val) {
//		cout << "\nItem not Found!";
//		return 0;
//	}
//	else {
//		cout << "\nItem Found!";
//		return 1;
//	}
//}
//void SortAscend() {
//	node* ptr, * cpt;
//	string temp;
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
//	string temp;
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
//	int val = 0, choice = 0;
//	int pos;
//	string name;
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
//	cout << "\n	10.	Search Employee";
//	cout << "\n	11.	Exit";
//	cout << "\n	------------------------------------------------------------------------------------------------------------";
//	while (choice != 11) {
//		cout << "\nPlease Enter Your Choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter data : ";
//			cin >> name;
//			/*if (search(name)) {
//				cout << "\nName alreday exists!";
//			}
//			else {*/
//				insertEnd(name);
//			break;
//		case 2:
//				cout << "\nEnter data : ";
//				cin >> name;
//					insertBeg(name);
//				break;
//	    case 3:
//				cout << "\nEnter Pos : ";
//				cin >> pos;
//				cout << "\nEnter data : ";
//				cin >> name;
//					insertPos(pos, name);
//				break;
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
//			cout << "\nEnter Pos : ";
//		    cin >> val; 
//			/*cout << "\nEnter data : ";
//			cin >> name;*/
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
//			cout << "\nEnter Name to search: ";
//			cin >> name;
//			search(name);
//			break;
//		case 11:
//			exit(0);
//
//		}
//	}
//
//	return 0;
//
//}
