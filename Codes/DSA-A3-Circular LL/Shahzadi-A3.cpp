//#include <iostream>
//using namespace std;
//struct node
//{
//	int data;
//	node* next;
//	node* prev;
//};
//node* current;
//void josephus(int n, int m)
//{
//	node* start;
//	node* end;
//	end = new node;
//	end->data = 1;
//	start = end;
//	for (int i = 2; i < n; i++) {
//		end->next = new node;
//		end->next->prev = end;
//		end->next->data = i;
//		end = end->next;
//	}
//	end->next = start;
//	start->prev = end;
//
//	current = start;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) {
//			current = current->next;
//		}
//		current = current->next;
//		current->prev = ((current->prev)->prev);
//		(current->prev)->next = current;
//	}
//	cout << "\n\nThe winner of hot potato game is: " << current->data << endl;
//}
//int main()
//{
//	int n, m;
//	cout << "Please Enter the number of people: ";
//	cin >> n;
//	cout << "Number of passes: ";
//	cin >> m;
//	josephus(n, m);
//	system("pause");
//}