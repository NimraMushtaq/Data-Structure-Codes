//#include<iostream>
//using namespace std;
//#define n 15
//int rear = -1, front = -1;
//string element;
//void enqueue(string arr[n], string element,string model,string fuel) {
//	if (rear == n - 1) {
//		cout << "\nQueue Overflow!";
//	}
//	else {
//		if (front == -1) {
//			front = 0;
//		}
//		rear++;
//		arr[rear] = element;
//		cout << "\nElement Enqued : "<<arr[rear];
//		cout << "\nCar Model : " << model;
//		cout << "\nFuel required : " << fuel;
//	}
//}
//void dequeue(string arr[n]) {
//
//	cout << "\nFront : " << front;
//	cout << "\nRear : " << rear;
//
//	if ((front == -1) || (front == rear + 1)) {
//		cout << "\nQueue Underflow!";
//	}
//	else {
//		string item = arr[front];
//		front++;
//		cout << "\nElement Dequed : " << item;
//
//	}
//}
//void display(string arr[n]) {
//	int i = front;
//	cout << "\nFront : " << front;
//	if ((front == -1) || (front == rear + 1)) {
//		cout << "\nQueue Empty!";
//	}
//	while (i <= rear) {
//		cout << "\nQueue[" << i << "] " << arr[i];
//		i++;
//	}
//}
//int main() {
//	string arr[n];
//	string carModel,carFuel;
//	int choice = 0;
//	cout << "\n----------------------Array based implementation of QUEUE-----------------------------------";
//	cout << "\n1.	Enqueue Car to queue";
//	cout << "\n2.	Dequeue  Car after refill";
//	cout << "\n3.	Display all Cars";
//	cout << "\n4.	Total Cars";
//	cout << "\n4.	Exit";
//	cout << "\n-------------------------------------------------------------------------------------------------------------";
//
//	while (choice != 5) {
//		cout << "\nPlease Enter Your Choice :";
//		cin >> choice;
//		switch (choice) {
//		case 1: cout << "\nEnter Car No enqueue : ";
//				cin >> element;
//				cout << "\nEnter Car Model : ";
//				cin >> carModel;
//				cout << "\nEnter Fuel required : ";
//				cin >> carFuel;
//				enqueue(arr, element,carModel,carFuel);
//				break;
//		case 2: dequeue(arr);
//			    break;
//		case 3: cout << "\nDisplay Queue : ";
//				display(arr);
//				break;
//		case 4: cout << "\nTotal Cras are : " << rear+1;
//			break;
//		case 5: exit(0);
//		
//
//		}
//
//	}
//	return 0;
//}
