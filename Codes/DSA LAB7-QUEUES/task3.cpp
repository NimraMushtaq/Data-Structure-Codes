//#include<iostream>
//using namespace std;
//#define n 15
//int rear = -1, front = -1;
//string element;
//bool isFull() {
//	bool temp = false;
//	if (rear == n-1) {
//		temp = true;
//	}
//	return true;
//}
//bool isEmpty() {
//	bool temp = false;
//	if ((front == -1) || (front == rear + 1)) {
//		temp = true;
//	}
//	return true;
//}
//void enqueue(string arr[n], string element) {
//	cout << "\nFront : " << front;
//	cout << "\nrear : " << rear;
//	if (isFull()) {
//		cout << "\nQueue Overflow!";
//	}
//	else{
//		if (front == -1) {
//			front = 0;
//		}
//		rear++;
//		arr[rear] = element;
//		cout << "\nElement Enqued : "<<arr[rear];
//	}
//}
//void dequeue(string arr[n]) {
//
//	if (isEmpty()) {
//		cout << "\nQueue Underflow!";
//	}
//	else {
//		string item = arr[front];
//		front++;
//		cout << "\nElement Dequed : " << item;
//
//	}
//}
//void display(string arr[10]) {
//	int i = front;
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
//	int choice = 0;
//	cout << "\n----------------------Array based implementation of QUEUE-----------------------------------";
//	cout << "\n1.	Enqueue cars to queue";
//	cout << "\n2.	Dequeue  cars from the queue";
//	cout << "\n3.	Display all Cars";
//	cout << "\n4.	Exit";
//	cout << "\n-------------------------------------------------------------------------------------------------------------";
//	while (choice != 4) {
//		cout << "\nPlease Enter Your Choice :";
//		cin >> choice;
//		switch (choice) {
//		case 1: cout << "\nEnter element to enqueue : ";
//			cin >> element;
//			enqueue(arr, element);
//			break;
//		case 2: dequeue(arr);
//			break;
//		case 3: cout << "\nDisplay Queue : ";
//			display(arr);
//			break;
//		case 4: exit(0);
//
//		}
//
//	}
//
//	return 0;
//}
