//#include<iostream>
//using namespace std;
//struct node {
//	int data;
//	node* next;
//	node* prev;
//};
//node* head = NULL;
//node* tail = NULL;
//void create(int val) {
//	node* temp = new node;
//		temp->data = val;
//		temp->next = NULL;
//		temp->prev = NULL;
//		tail = temp;
//		head = temp;
//}
//void insertEnd(int val) {
//	node* temp = new node;
//	if (head == NULL) {
//		create(val);
//	}
//	else {
//		temp->data = val;
//		temp->next = head;
//		temp->prev = tail;
//		tail->next = temp;
//		tail = temp;
//	}
//}
//void insertBeg(int val) {
//	node* temp = new node;
//	temp->data = val;
//	temp->next = head;
//	temp->prev = NULL;
//	head->prev = temp;
//	head = temp;
//	tail->next = head;
//}
//void insertPos(int val,int pos) {
//	node* temp = new node;
//	node* ptr=head,*temp2;
//	temp->data = val;
//
//		for (int i = 1; i < pos - 1; i++) {
//			ptr = ptr->next;
//		}
//		if (pos == 1) {
//			insertBeg(val);
//		}
//		/*else if (ptr->next==head->next) {
//			cout << "\nPosition is invalid!";
//		}*/
//		else if(ptr->next==head){
//			insertEnd(val);
//		}
//		else {
//
//			temp2 = ptr->next;
//			temp->next = temp2;
//			temp2->prev = temp;
//			ptr->next = temp;
//			temp->prev = ptr;
//
//		}
//}
//void deleteBeg() {
//	node* temp = head;
//	head = temp->next;
//	head->prev = NULL;
//	tail->next = head;
//	free(temp);
//}
//void deleteEnd() {
//	node* temp, * temp1;
//		temp = tail;
//        temp1 = tail->prev;
//		temp1->next = head;
//		free(temp);
//}
//void deletePos(int pos) {
//	node* temp,*temp2, * ptr;
//	ptr = head;
//	for (int i = 1; i < pos; i++) {
//		ptr = ptr->next;
//	}
//	/*if (ptr->next == head->next) {
//		cout << "\nInvalid Position!";
//	}*/
//	if (pos == 1) {
//		deleteBeg();
//	}
//	else if (ptr->next == head) {
//		deleteEnd();
//	}
//	else {
//		temp = ptr->prev;
//		temp2 = ptr->next;
//		temp->next = temp2;
//		temp2->prev = temp;
//		free(ptr);
//	}
//}
//void print() {
//	node* ptr = head;
//	while (ptr->next!=head) {
//		cout << ptr->data<<"->";
//		ptr = ptr->next;
//	}
//	cout << ptr->data;
//}
//void search(int val) {
//	node* ptr = head;
//	while ((ptr->next!=head)&&(ptr->data!=val)){
//		ptr = ptr->next;
//	}
//	if (ptr->data != val) {
//		cout << "\nElement not Found!";
//	}
//	else {
//		cout << "\nElement has been Found!";
//	}
//}
//int main() {
//	    int choice = 0;
//		int val,n,pos;
//		cout << "\n######################### CIRCULAR DOUBLE LINKED LIST ################################";
//		cout << "\n1.Insert elements ";
//		cout << "\n2.Display Linked List ";
//		cout << "\n3.Insert at beg ";
//		cout << "\n4.Insert at pos ";
//		cout << "\n5.Delete at beg ";
//		cout << "\n6.Delete at end ";
//		cout << "\n7.Delete at pos ";
//		cout << "\n8.Search Element";
//		cout << "\n9.Exit";
//		while (choice != 9)
//		{
//			cout << "\nEnter your choice ";
//			cin >> choice;
//			switch (choice) {
//			case 1:
//				cout << "\nEnter no of elements ";
//				cin >> n;
//				cout << "\nEnter data ";
//				for (int i = 1; i <= n; i++) {
//					cin >> val;
//					insertEnd(val);
//				}
//				break;
//			case 2: 
//				cout << "\n-------------DISPLAY-----------------\n";
//				print();
//				break;
//			case 3:
//				cout << "\nEnter data ";
//				cin >> val;
//				insertBeg(val);
//				break;
//			case 4:
//				cout << "\nEnter position to insert ";
//				cin >> pos;
//				cout << "\nEnter data : ";
//				cin >> val;
//				insertPos(val,pos);
//				break;
//			case 5:
//				deleteBeg();
//			    break;
//			case 6:
//				deleteEnd();
//				break;
//			case 7:
//				cout << "\nEnter position to delete ";
//				cin >> pos;
//				deletePos(pos);
//				break;
//			case 8:
//				cout << "\nEnter element to search : ";
//				cin >> val;
//				search(val);
//				break;
//			case 9:
//				exit(0);
//			}
//		}
//}