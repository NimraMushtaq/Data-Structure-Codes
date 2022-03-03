//#include<iostream>
//using namespace std;
//struct node {
//	int data;
//	node* next;
//};
//struct node* head=NULL;
//struct node* tail=NULL;
//void create(int val) {
//	node* ptr = new node;
//	head = ptr;
//	ptr->data = val;
//	tail = ptr;
//	tail->next = head;
//}
//void insertEnd(int val) {
//	if (head == NULL) {
//		create(val);
//	}
//	else {
//		node* ptr = new node;
//		tail->next = ptr;
//		ptr->data = val;
//		tail = ptr;
//		tail->next = head;
//	}
//}
//void insertFront(int val) {
//	node* ptr;
//	ptr = new node;
//	ptr->data = val;
//	ptr->next = head;
//	head = ptr;
//	tail->next = head;
//}
//void insertPos(int val, int pos) {
//	node* temp = head;
//	node* ptr = new node;
//	for (int i = 1; i < pos - 1; i++) {
//		temp = temp->next;
//	}
//	ptr->data = val;
//	ptr->next = temp->next;
//	temp->next = ptr;
//}
//void deleteFront() {
//	if (head == NULL) {
//		cout << "\nList is Empty!";
//	}
//	else if (head == tail) {
//		node* temp = head;
//		head = NULL;
//		tail = NULL;
//		free(temp);
//		cout << "\nList Emptied!";
//	}
//	else {
//		node* temp = head;
//		head = temp->next;
//		tail->next = head;
//		free(temp);
//	}
//}
//void deletePos(int pos) {
//	node* current, * nextnode;
//	current = head;
//	for (int i = 1; i < pos - 1; i++) {
//		current = current->next;
//	}
//  //Current is one position behind the delete Position
//	nextnode = current->next;
//	current->next = nextnode->next;
//	free(nextnode);
//}
//void deleteEnd() {
//	if (head == NULL) {
//		cout << "\nList is Empty!";
//	}
//	else if (head == tail) {
//		node* temp = head;
//		head = NULL;
//		tail = NULL;
//		free(temp);
//		cout << "\nList Emptied!";
//	}
//	else {
//		node* prevTail = head;
//		node* prev = NULL;
//		while (prevTail->next != head) {
//			prev = prevTail;
//			prevTail = prevTail->next;
//		}
//		prev->next = head;
//		tail = prev;
//		free(prevTail);
//	}
//
//}
//void display() {
//	node* ptr = head;
//	if (head == NULL) {
//		cout << "\nList is Empty!";
//	}
//	else {
//		//cout <<"head->" << head<<" ";
//		while (ptr->next != head) {
//			cout << ptr->data<<" ";
//			ptr = ptr->next;
//		}
//		cout << ptr->data;
//	}
//}
//void josephus() {
//	//MY CODE
//	int m = 1;
//	node* prev, * current, * temp;
//	prev = head;
//	current = head;
//while (current->next != current) {
//		int count = 0;
//		if (m == 0) {
//			cout << current->data << " ";
//			deleteFront();
//			//OR 
//		/*	current = head;
//			temp = head;
//			cout << temp->data << " ";
//			head = head->next;
//			tail->next = head;
//			current = head;
//			free(temp);*/
//		}
//		else {
//			while (count != m) {
//				prev = current;
//				current = current->next;
//				count++;
//			}
//			temp = current;
//			cout << current->data << " ";
//			if (temp == head) {
//				head = head->next;
//				tail->next = head;
//			}
//			prev->next = current->next;
//			current = prev->next;
//			free(temp);
//
//		}
//}
///*
//	 //****Youtube Code*****
//	node* current, *del;
//	current = head;
//	  del = head->next;
//	   while (head->next != head) {
//		for (int i = 0; i < 0; i++) {
//			current = current->next;
//			del = del->next;
//		}
//		current->next = del->next;
//		if (del == head) {
//			head = head->next;
//		}
//		
//		cout << "val " << del->data << " ";
//		free(del);
//		current = current->next;
//		del = current->next;
//
//	}*/
//	cout << "\nWinner is " << current->data;
//}
//int main() {
//	int choice = 0;
//	int val,n,pos;
//	cout << "\n######################### CIRCULAR LINKED LIST ################################";
//	cout << "\n1.Insert elements ";
//	cout << "\n2.Display Linked List ";
//	cout << "\n3.Insert at beg ";
//	cout << "\n4.Insert at pos ";
//	cout << "\n5.Delete at beg ";
//	cout << "\n6.Delete at end ";
//	cout << "\n7.Delete at pos ";
//	cout << "\n8.Josephus Problem ";
//	cout << "\n9.Exit";
//	while (choice != 9)
//	{
//		cout << "\nEnter your choice ";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter no of elements ";
//			cin >> n;
//			cout << "\nEnter data ";
//			for (int i = 1; i <= n; i++) {
//				cin >> val;
//				insertEnd(val);
//			}
//			break;
//		case 2: 
//			cout << "\n-------------DISPLAY-----------------\n";
//			display();
//			break;
//		case 3:
//			cout << "\nEnter data ";
//			cin >> val;
//			insertFront(val);
//			break;
//		case 4:
//			cout << "\nEnter position to insert ";
//			cin >> pos;
//			cout << "\nEnter data : ";
//			cin >> val;
//			insertPos(val,pos);
//			break;
//		case 5:
//			deleteFront();
//		    break;
//		case 6:
//			deleteEnd();
//			break;
//		case 7:
//			cout << "\nEnter position to delete ";
//			cin >> pos;
//			deletePos(pos);
//			break;
//		case 8:
//			cout << "\nJosephus Problem \n";
//			josephus();
//			break;
//		case 9:
//			exit(0);
//		}
//	}
//
//}