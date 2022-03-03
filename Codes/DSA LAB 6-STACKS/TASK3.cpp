//#include<iostream>
//#include<string>
//using namespace std;
//void push(int currShelf, int currTable, string table[], string shelf[]) {
//	if (currShelf >= 20) {
//		cout << "\nShelf is out of Space!";
//		exit(0);
//	}
//	else if (currTable < 0) {
//		cout << "\nTable is Empty!";
//		exit(0);
//	}
//
//	 else if ((currShelf < 20) && (currTable >= -1)) {
//		shelf[currShelf] = table[currTable];;
//	}
//	
//}
//int pop(int current, int arr[]) {
//	if (current >= 1)
//	{
//		cout << "\nElement : " << arr[current];
//		current--;
//	}
//	return current;
//}
//void display(int current, string arr[]) {
//	for (int i = current; i >= 0; i--)
//	{
//		cout << "\nStack[ " << i << " ] : " << arr[i];
//	}
//}
//void top(int current, int arr[]) {
//	cout << "\n*Top*";
//	cout << "\nElement : " << arr[current];
//}
//int main() {
//	int number = 0, element = 0;
//	int n = 10;
//	int currTable = 19;
//	string table[20] = { "book1", "book2", "book3", "book4", "book5", "book6", "book7", "book8", "book9", "book10",
//		"book11", "book12", "book13", "book14", "book15", "book16", "book17", "book18", "book19", "book20" };
//	int currShelf = -1;
//	string shelf[20] = {};
//	cout << "\n----------------------Array based implementation of STACK-----------------------------------";
//	char ch;
//	do {
//		cout << "\nHow many books you want on the shelf?";
//		cin >> number;
//		for (int i = 1; i <= number; i++) {
//			currShelf++;
//			push(currShelf, currTable, table, shelf);
//			currTable--;
//
//		}
//		cout << "\nCurrent Table : " << currTable;
//		cout << "\nCurrent Shelf : " << currShelf;
//		cout << "\n*********Display Books on Shelf*********";
//		display(currShelf, shelf);
//		cout << "\n*********Display Books on Table*********";
//		display(currTable, table);
//		cout << endl;
//		cout << "\nDo you want to add more books to the Shelf?";
//		cin >> ch;
//	} while (ch != ('n'||'N'));
//	system("pause");
//	return 0;
//
//}
