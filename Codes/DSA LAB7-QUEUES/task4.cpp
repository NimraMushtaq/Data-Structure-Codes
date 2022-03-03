//#include<iostream>
//using namespace std;
//#define n 10
//int rear = -1, front = -1;
//int element;
//bool isFull() {
//	bool temp = false;
//	if ((rear+1)%n==front) {
//		temp = true;
//	}
//	return temp;
//}
//bool isEmpty() {
//	bool temp = false;
//	if ((front == -1)&&(rear==-1)) {
//		temp = true;
//	}
//	return temp;
//}
//void enqueue(int arr[10], int element) {
//	if (isFull()) {
//		cout << "\nQueue Overflow!";
//	}
//	else {
//		if (isEmpty()) {
//			front = 0;
//			rear = 0;
//		}
//		else if (rear == n - 1) {
//			rear = 0;
//
//		}
//		else {
//			rear++;
//		}
//		arr[rear] = element;
//		cout << "\narr[" << rear << "] : " << arr[rear];
//		cout << "\nFront : " << front;
//		cout << "\nRear : " << rear;
//
//
//	}
//}
//void dequeue(int arr[n]) {
//	if (isEmpty()) {
//		cout << "\nQueue Underflow!";
//	}
//	else {
//		int item = arr[front];
//		if (front == rear) {
//			front = -1;
//			rear = -1;
//		}
//		else if (front == n - 1) {
//			front = 0;
//		}
//		else {
//			cout << "\nElement Dequed : " << item;
//			front++;
//		}
//
//	}
//}
//void display(int arr[n]) {
//	if (isEmpty()) {
//		cout << "\nQueue Empty!";
//	}
//	else{
//		int i;
//		if (front <= rear)
//		{
//			for(i=front;i<=rear;i++)
//				cout << "\nQueue[" << i << "] " << arr[i];
//		}
//		else {
//			i = front;
//				while (i < n) {
//					cout << "\nQueue[" << i << "] " << arr[i];
//					i++;
//				}
//				i = 0;
//				while (i <= rear) {
//					cout << "\nQueue[" << i << "] " << arr[i];
//					i++;
//				}
//		}
//	}
//
//}
//int main() {
//	int arr[n];
//	int choice = 0;
//	cout << "\n----------------------Array based implementation of CIRCULAR QUEUE-----------------------------------";
//	cout << "\n1.	Enqueue elements to queue";
//	cout << "\n2.	Dequeue  few elements from the queue";
//	cout << "\n3.	Display all";
//	cout << "\n4.	Exit";
//	cout << "\n-------------------------------------------------------------------------------------------------------------";
//	while (choice != n) {
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
//	system("pause");
//	return 0;
//}
