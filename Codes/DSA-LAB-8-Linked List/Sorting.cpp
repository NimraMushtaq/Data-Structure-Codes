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
//  //Selection Sort
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
//void display() {
//	node* ptr;
//	ptr = start;
//	if (start == NULL) {
//		cout << "\nLinked List Empty!!";
//	}
//	else {
//		cout << "\n***************";
//		while (ptr->next != NULL) {
//			cout << "\nName    : " << ptr->name;
//			cout << "\nAge    : " << ptr->age;
//			cout << "\nSalary : " << ptr->salary;
//			ptr = ptr->next;
//			cout << endl;
//		}
//			cout <<"\nName    : "<< ptr->name;
//			cout <<"\nAge    : "<< ptr->age;
//			cout <<"\nSalary : "<< ptr->salary;
//			cout << "\n***************";
//
//	}
//}
//int main() {
//	int element;
//	int pos;
//	start = NULL;
//	cout << "\n----------------------Linked List Sorting-----------------------------------";
//	cout << "\n	1.	Enter elements List";
//	cout << "\n	2.	Display Linked List";
//	cout << "\n	3.	Sort List";
//	cout << "\n	4.	Exit";
//	cout << "\n-----------------------------------------------------------------------------";
//	int choice = 0;
//	while (choice != 4) {
//		cout << "\nEnter choice : ";
//		cin >> choice;
//		switch (choice) {
//		case 1: 
//			for (int i = 1; i <= 10; i++)
//			{
//			            cout << "\nEnter Name : ";
//						cin >> p_name;
//						cout << "\nEnter your age : ";
//						cin >> p_age;
//						cout << "\nEnter salary : ";
//						cin >> p_salary;
//			            insertEnd();
//		    }
//			  break;
//		case 2:
//			cout << "\n	--------------------------Display List---------------------------";
//			display();
//			break;
//		case 3:
//			cout << "\n	--------------------------List Sorted---------------------------";
//			sort();
//			break;
//		case 4:
//			exit(0);
//		}
//	}
//	return 0;
//}
