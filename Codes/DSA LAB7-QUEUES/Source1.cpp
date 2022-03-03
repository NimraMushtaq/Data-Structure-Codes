//#include<iostream>
//#include<time.h>
//#include <stdlib.h>  
//using namespace std;
//#define n 10
//int rear = -1, front = -1;
//string element;
//
//bool isFull() {
//	bool temp = false;
//	if ((rear + 1) % n == front) {
//		temp = true;
//	}
//	return temp;
//}
//bool isEmpty() {
//	bool temp = false;
//	if ((front == -1) && (rear == -1)) {
//		temp = true;
//	}
//	return temp;
//}
//void enqueue(string arr[], string element) {
//	if (isFull()) {
//		cout << "\nQueue Overflow!";
//	}
//		else {
//			if (front == -1) {
//				front = 0;
//			}
//			rear++;
//			arr[rear] = element;
//			cout << "\narr[" << rear << "] : " << arr[rear];
//		}
//}
//void dequeue(string arr[]) {
//
//	if (isEmpty()) {
//		cout << "\nQueue Underflow!";
//	}
//		else {
//		string item = arr[front];
//		front++;
//		cout << "\nElement Dequed : " << item;
//
//	}
//}
//void display(string arr[]) {
//	if (isEmpty()) {
//		cout << "\nQueue Empty!";
//	}
//	else {
//		int i = front;
//		while (i <= rear) {
//			cout << "\nQueue[" << i << "] " << arr[i];
//			i++;
//		}
//
//	}
//}
//int main() {
//	int score[10] = { 0 };
//	int max = score[0];
//	srand(time(0));
//	string arr[n];
//	int choice = 0;
//	cout << "\n----------------------BASKETBALL PLAYERS-----------------------------------";
//	cout << "\n1.   Add Player All Players";
//	cout << "\n2.	Take your turn";
//	cout << "\n3.	Display all Players";
//	cout << "\n4.   Display Winner";
//	cout << "\n5.   Display Score of each Players ";
//	cout << "\n6.   Display Miss of each Players ";
//	cout << "\n7.	Exit";
//	cout << "\n-------------------------------------------------------------------------------------------------------------";
//
//	while (choice != 7) {
//		cout << "\nPlease Enter Your Choice :";
//		cin >> choice;
//		switch (choice) {
//		case 1:
//			cout << "\nEnter 10 Player to enqueue : ";
//			for (int i = 1; i <= 10; i++) {
//				cout << "\nEnter Player to enqueue : ";
//				cin >> element;
//				enqueue(arr, element);
//			}
//			cout << "\n-------------------------------------------------------------------------------------------------------------";
//			break;
//		case 2:
//			for (int j = 1; j <= 5; j++) {
//				front = 0;
//				cout << "\n****** Turn " << j << " of Players******";
//				for (int i = 0; i < 10; i++) {
//					int scored = 0;
//					int random = rand() % 100;
//					if (random > 50) {
//						scored = 10;
//					}
//					dequeue(arr);
//					cout << "\nPlayer : " << i + 1;
//					score[i] = score[i] + scored;
//					cout << "\n" << score[i];
//				}
//			}
//			cout << "\n-------------------------------------------------------------------------------------------------------------";
//			break;
//		case 3: cout << "\n****** Display	Players List ****** : ";
//			display(arr);
//			cout << "\n-------------------------------------------------------------------------------------------------------------";
//			break;
//		case 4:
//			for (int i = 1; i < 10; i++) {
//				if (max < score[i]) {
//					max = score[i];
//				}
//			}
//			cout << "\n****** Winners List ******";
//			for (int i = 0; i < 10; i++) {
//				if (max == score[i]) {
//					cout << "\nPlayer " << arr[i] << " is the winner with score of : " << max;
//				}
//			}
//			cout << "\n-------------------------------------------------------------------------------------------------------------";
//			break;
//		case 5:
//			cout << "\n****** Score of Players ******";
//			for (int i = 0; i < 10; i++) {
//				cout << "\nPlayer " << arr[i] << "  score  : " << score[i];
//			}
//			cout << "\n-------------------------------------------------------------------------------------------------------------";
//			break;
//		case 6:
//			cout << "\n****** Miss of Players ******";
//			for (int i = 0; i < 10; i++) {
//				cout << "\nPlayer " << arr[i] << "  miss  : " << 5 - (score[i] / 10);
//			}
//			cout << "\n-------------------------------------------------------------------------------------------------------------";
//			break;
//		case 7: break;
//
//		}
//	}
//
//	system("pause");
//	return 0;
//}
