//#include<iostream>
//using namespace std;
//int rear = -1, front = -1;
//int element, n = 5;
//void enqueue(int arr[5], int element) {
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
//	}
//}
//void dequeue(int arr[5]) {
//
//	if ((front == -1) || (front == rear + 1)) {
//		cout << "\nQueue Underflow!";
//	}
//	else {
//		int item = arr[front];
//		front++;
//		cout << "\nElement Dequed : " << item;
//
//	}
//}
//void display(int arr[10]) {
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
//	int arr[10];
//	enqueue(arr, 10);
//	enqueue(arr, 7);
//	enqueue(arr, 4);
//	display(arr);
//	dequeue(arr);
//	dequeue(arr);
//	display(arr);
//	enqueue(arr, 8);
//	enqueue(arr, 2);
//	enqueue(arr, 12);
//	display(arr);
//	cout << endl;
//	system("pause");
//	return 0;
//}
