//#include<iostream>
//using namespace std;
//#include<iostream>
//int p_salary, p_age;
//string p_name;
//using namespace std;
//struct node {
//	int age;
//	int salary;
//	string name;
//	node* next;
//};
//node* start = NULL;
//void sort() {
//	node* ptr, * cpt;
//	string temp;
//	ptr = start;
//	while (ptr->next != NULL) {
//		cpt = ptr->next;
//		while (cpt != NULL) {
//			if (ptr->name > cpt->name) {
//				temp = ptr->name;
//				ptr->name = cpt->name;
//				cpt->name = temp;
//
//			}
//			cpt = cpt->next;
//		}
//		ptr = ptr->next;
//	}
//
//}
//void insertEnd() {
//	node* temp, * ptr;
//	ptr = start;
//	temp = new node;
//	temp->age = p_age;
//	temp->salary = p_salary;
//	temp->name = p_name;
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
//void insertBeg() {
//	node* temp = new node;
//	temp->age = p_age;
//	temp->salary = p_salary;
//	temp->name = p_name;
//	temp->next = start;
//	start = temp;
//
//}
//void insertPos(int pos) {
//	node* ptr, * temp, * temp1;
//	temp1 = new node;
//	temp = start;
//	ptr = start;
//	if (ptr == NULL) {
//		cout << "\nCreate Node first!";
//	}
//	else if (pos == 1) {
//		insertBeg();
//	}
//	else {
//		for (int i = 1; i <= pos - 1; i++) {
//			temp = ptr;
//			ptr = ptr->next;
//		}
//		temp->age = p_age;
//		temp->salary = p_salary;
//		temp->name = p_name;
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
//void search() {
//	node* ptr;
//	ptr = start;
//	while ((ptr->next != NULL) && (ptr->name != p_name)) {
//		ptr = ptr->next;
//	}
//	if (ptr->name == p_name) {
//		cout << "\nFound element!";
//	}
//	else {
//		cout << "\nElement not found!!";
//	}
//}
//void display() {
//	node* ptr;
//	ptr = start;
//	if (start == NULL) {
//		cout << "\nLinked List Empty!!";
//	}
//	else {
//		while (ptr->next != NULL) {
//			cout << ptr->name;
//			cout << ptr->age;
//			cout << ptr->salary;
//			ptr = ptr->next;
//			cout << endl;
//		}
//		cout << ptr->name;
//		cout << ptr->age;
//		cout << ptr->salary;
//	}
//}
//int main() {
//	int element;
//	int pos;
//	start = NULL;
//	cout << "\n----------------------Linked List Sorting---------------------------------- -";
//	cout << "\n	1.	Insert an element at the end";
//	cout << "\n	2.	Insert an element at the beginning";
//	cout << "\n	3.	Insert element at any position";
//	cout << "\n	4.	Delete an element from end";
//	cout << "\n	5.	Delete an element at the beginning";
//	cout << "\n	6.	Delete an element at any position";
//	cout << "\n	7.	Search an element";
//	cout << "\n	8.	Display List";
//	cout << "\n	9.	Sort Linked List";
//	cout << "\n	10.	Exit";
//	cout << "\n	-------------------------------------------------------------------------------------------------------------";
//	int choice = 0;
//	while (choice != 10) {
//		cout << "\nEnter choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter Name : ";
//			cin >> p_name;
//			cout << "\nEnter your age : ";
//			cin >> p_age;
//			cout << "\nEnter salary : ";
//			cin >> p_salary;
//			insertEnd();
//			break;
//		case 2:
//			cout << "\nEnter Name : ";
//			cin >> p_name;
//			cout << "\nEnter your age : ";
//			cin >> p_age;
//			cout << "\nEnter salary : ";
//			cin >> p_salary;
//			insertBeg();
//			break;
//		case 3:
//			cout << "\nEnter Position : ";
//			cin >> pos;
//			cout << "\nEnter Name : ";
//			cin >> p_name;
//			cout << "\nEnter your age : ";
//			cin >> p_age;
//			cout << "\nEnter salary : ";
//			cin >> p_salary;
//			insertPos(pos);
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
//			cout << "\nEnter name to search : ";
//			cin >> p_name;
//			search();
//			break;
//		case 8:
//			display();
//			break;
//		case 9:
//			sort();
//			break;
//		case 10:
//			exit(0);
//		}
//	}
//	return 0;
//}
