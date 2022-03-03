//#include<iostream>
//#include<string>
//using namespace std;
//#define n 10
//int rear = -1, front = -1;
//int trays=100, trayReceived=0;
//int token=0, custWait=0,custPaid=0;
//void enqueue(string arr[],string data) {
//	if (rear == n - 1) {
//		cout << "Full Capacity!";
//	}
//	else {
//		if (front == -1) {
//			front = 0;
//		}
//			rear++;
//			arr[rear] = data;
//			cout << "\nCustomer " << arr[rear] << " added";
//			token++;
//			cout << "\nToken no : " << token;
//			trays--;
//			custWait++;
//		
//	}
//}
//void dequeue(string arr[]) {
//	if ((front==-1)||(front==rear+1)){
//		cout << "Cafe is Empty! ";
//	}
//	else {
//		string cust = arr[front];
//		front ++;
//		trayReceived++;
//		custPaid++;
//	}
//}
//void display(string arr[]) {
//	int i = front;
//	if ((front == -1) || (front == rear + 1)) {
//		cout << "\nCafe Empty!";
//	}
//	while (i <= rear) {
//		cout << "\nQueue[" << i << "] " << arr[i];
//		i++;
//	}
//}
//int main() {
//	string queue[n];
//	string element;
//		int choice = 0;
//	cout << "\n----------------------Array based implementation of QUEUE-----------------------------------";
//	cout << "\n1.	Enqueue  Customers";
//	cout << "\n2.   Dequeue  Customers";
//	cout << "\n3.	Display how many customer are waiting for their turn ?";
//	cout << "\n4.	Display how many customer have paid the bill ?";
//	cout << "\n5.	Display number of trays left on counter(Assume there are 100 tray)";
//	cout << "\n6.	Display number of trays received on washing counter";
//	cout << "\n7.	Exit";
//	cout << "\n-------------------------------------------------------------------------------------------------------------";
//	while (choice != 7) {
//		cout << "\nPlease Enter Your Choice :";
//		cin >> choice;
//		switch (choice) {
//		case 1: cout << "\nEnter Customer to enqueue : ";
//			cin >> element;
//			enqueue(queue, element);
//			break;
//		case 2: dequeue(queue);
//			break;
//		case 3: cout << "\nDisplay Customers Waiting : ";
//			display(queue);
//			break;
//		case 4: cout << "\nCustomers paid : "<<custPaid;
//			break;
//		case 5: cout << "\nTrays left on Counter : " << trays;
//			break;
//		case 6: cout << "\nTrays Received : " << trayReceived;
//			break;
//		case 7: exit(0);
//
//		}
//
//	}
//	return 0;
//}