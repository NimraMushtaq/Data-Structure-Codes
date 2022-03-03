//#include<iostream>
//using namespace std;
//int main() {
//	int arr[6] = { 77,33,44,11,88,22 };
//	int n = 6,min;
//	for (int i = 0; i < n-1 ; i++) {
//		min = i;
//		for (int j = i + 1; j <= n-1; j++) {
//			if (arr[j] < arr[min]) {
//				min = j;
//			}
//		}
//		int temp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = temp;
//	}
//	cout << "\nDisplay Array";
//	for (int i = 0; i < n; i++) {
//		cout << "\nArray[" << i << "]:" << arr[i];
//	}
//	return 0;
//}