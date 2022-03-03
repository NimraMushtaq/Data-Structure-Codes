//#include<iostream>
//using namespace std;
//struct node {
//	int info;
//	struct node* next;
//}*start;
//void insertEnd(int data) {
//	node* temp, * ptr;
//	ptr = start;
//	temp = new node;
//	temp->info = data;
//	while (ptr->next != NULL) {
//		ptr = ptr->next;
//	}
//	ptr->next = temp;
//	temp->next = NULL;
//}
//void create(int num) {
//	node* temp;
//	temp = new node;
//	int data;
//	for (int i = 1; i <= num; i++) {
//		if (start == NULL) {
//			cout << "\nEnter data : ";
//			cin >> data;
//			temp->info = data;
//			temp->next = NULL;
//			start = temp;
//		}
//		else {
//			cout << "\nEnter data : ";
//			cin >> data;
//			insertEnd(data);
//		}
//    }
//}
//void insertFront(int data){
//	node* temp;
//	temp = new node;
//	temp->info = data;
//	temp->next = start;
//	start = temp;
//}
//void insertpos(int data, int pos) {
//	node* temp, *ptr;
//	ptr = start;
//	temp = new node;
//	temp->info = data;
//	if (start == NULL) {
//		cout << "\nCreate node first!";
//	}
//	else if (pos == 1) {
//		insertFront(data);
//	}
//	else {
//		for (int i = 1; i < pos - 1; i++) {
//			ptr = ptr->next;
//		}
//		temp->next = ptr->next;
//		ptr->next = temp;
//	}
//
//}
//void deleteEnd()
//{
//node* ptr, * temp;
//ptr = start;
//temp = start;
//while (ptr->next != NULL) {
//	temp = ptr;
//	ptr = ptr->next;
//}
//temp->next = NULL;
//free(ptr);
//}
//void deleteBeg() {
//	node* ptr = start;
//	start = start->next;
//	free(ptr);
//}
//void deletepos(int pos)
//{
//	node* temp, * ptr;
//	ptr = start;
//	temp = start;
//	if (start == NULL) {
//		cout << "\nCreate Node first!";
//	}
//	else if (pos == 1) {
//		start = ptr->next;
//		free(ptr);
//	}
//	else {
//		for (int i = 1; i < pos ; i++) {
//			temp = ptr;
//			ptr = ptr->next;
//		}
//		temp->next = ptr->next;
//		free(ptr);
//	}
//}
//void display(){
//node*ptr;
//ptr=start;
//if(start==NULL){
// cout<<"\nLink list does not exist!";
// }
// else{
//          while (ptr!= NULL) {
//			cout << "|"<<ptr->info << "," << ptr->next<<"|"<<"-->";
//			ptr = ptr->next;
//		}
//     }
//}
//
// void search(int data){
//	 int flag = 0;
//	 node* ptr;
//	 ptr = start;
//	 while (ptr != NULL) {
//		 if (ptr->info== data) {
//			 flag++;
//			 cout << "\nItem found!";
//			 break;
//		 }
//		 ptr = ptr->next;
//	 }
//	 if (flag==0) {
//		 cout << "\nItem not found!";
//	 }
//}
// int main() {
//	 int len, data, pos;
//	 int choice = 0;
//	 cout << "\n######################### LINKED LIST ################################";
//	 cout << "\n1.Create a Node ";
//	 cout << "\n2.Insert at Start ";
//	 cout << "\n3.Insert at End ";
//	 cout << "\n4.Insert at nth Position ";
//	 cout << "\n5.Delete a Node at nth Position";
//	 cout << "\n6.Delete the Node at End";
//	 cout << "\n7.Delete the Node at Beg";
//	 cout << "\n8.Display Linked List ";
//	 cout << "\n9.Search";
//	 cout << "\n10.Exit";
//	 while (choice != 10)
//	 {
//		 cout << "\nEnter your choice ";
//		 cin >> choice;
//		 switch (choice) {
//		 case 1:
//			 cout << "\nEnter length of linked list ";
//			 cin >> len;
//			 create(len);
//			 break;
//		 case 2:
//			 cout << "\nEnter data : ";
//			 cin >> data;
//			 insertFront(data);
//			 break;
//		 case 3:
//			 cout << "\nEnter data : ";
//			 cin >> data;
//			 insertEnd(data);
//			 break;
//		 case 4:
//			 cout << "\nEnter position to insert ";
//			 cin >> pos;
//			 cout << "\nEnter data : ";
//			 cin >> data;
//			 insertpos(data, pos);
//			 break;
//		 case 5:
//			 cout << "\nEnter position to delete ";
//			 cin >> pos;
//			 deletepos(pos);
//			 break;
//		 case 6:
//			 deleteEnd();
//			 break;
//		 case 7:
//			 deleteBeg();
//			 break;
//		 case 8:display();
//			 break;
//		 case 9:
//			 cout << "\nEnter data to be searched  : ";
//			 cin >> data;
//			 search(data);
//			 break;
//		 case 10:
//			 exit(0);
//
//		 }
//
//	 }
//	 return 0;
// }