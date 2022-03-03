//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//struct node
//{
//	int info;
//	struct node* next;
//	struct node* prev;
//}*head, * tail;
//
//void Create(int data)
//{
//	node* n;
//	n = new node;
//	n->info = data;
//	if (head == NULL) {
//		n->next = NULL;
//		n->prev = NULL;
//		head = n;
//		tail = n;
//	}
//	else {
//		n->next = NULL;
//		n->prev = tail;
//		tail->next = n;
//		tail=n;
//	}
//}
//
//void Sorting()
//{
//	node* temp, * temp1;
//	temp = head;
//	int hold;
//	while (temp->next!= NULL)
//	{
//		temp1 = temp->next;
//		while (temp1!= NULL)
//		{
//			if (temp->info > temp1->info)
//			{
//				hold = temp->info;
//				temp->info = temp1->info;
//				temp1->info = hold;
//			}
//			temp1 = temp1->next;
//		}
//	
//		temp = temp->next;
//	}
//	
//}
//void print() {
//	node* ptr;
//	ptr = head;
//	while (ptr != NULL) {
//		cout << ptr->info << " ";
//		ptr = ptr->next;
//	}
//}
//int main()
//{
//	int data;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "Enter Data for node " << i + 1 << endl;
//		cin >> data;
//		Create(data);
//	}
//	print();
//	cout << endl;
//	Sorting();
//	cout << endl;
//	print();
//	system("pause");
//	return 0;
//}