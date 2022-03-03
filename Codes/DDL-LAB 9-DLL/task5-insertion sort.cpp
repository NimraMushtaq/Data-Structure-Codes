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
//	node* temp, *ptr;
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
//		cout << ptr->data<<" ";
//		ptr = ptr->next;
//	}
//}
//void insertionSort() {
//	printFor();
//	node* i, *j;
//	node* curr = {}, * inc;
//	i = head;
//	//j = head;
//	int key;
//	i = i->next;
//	cout << "\ni->data:" << i->data;
//	while (i!= NULL) {
//		cout << "\nLoop";
//		key = i->data;
//		cout << "\nkey:" << key;
//		j = i->prev;
//		cout << "\nj->data:" << j->data;
//		while ((j!= NULL) && ((j->data) > (key))) {
//			curr = j;
//			cout << "\ncurr->data:" << curr->data;
//			inc = j->next;	
//			cout << "\ninc->data:" << inc->data;
//			cout << "\ninc->data:" << inc->data;
//			inc->data = curr->data;
//			cout<<" = " << "curr->data:" << curr->data;;
//			j = j->prev;
//			cout << endl;
//			printFor();
//		}
//		if (j == NULL) {
//			cout << "\nNULL";
//			j = curr;
//			cout << "\nj->data:" << j->data;
//			j->data = key;
//			cout << " = " << "key:" << key;
//			i = i->next;
//			cout << endl;
//			printFor();
//		}
//		else {
//			cout << "\nNOT NULL";
//			j = j->next;
//			cout << "\nj->data:" << j->data;
//			j->data = key;
//			cout << " = " << "key:" << key;
//			i = i->next;
//			cout << endl;
//			printFor();
//		}
//	}
//}
//int main() {
//	int val=0, choice=0;
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
