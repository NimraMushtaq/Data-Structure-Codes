//#include<iostream>
//using namespace std;
//int main() {
//	int arr[6] = { 77,33,44,11,88,22 };
//	int n = 6;
//	for (int pass = 1; pass < n; pass++) {
//		for (int c = 0; c < n - pass; c++) {
//			if (arr[c] > arr[c + 1]) {
//				int temp = arr[c ];
//					arr[c] = arr[c+1];
//				    arr[c+1] = temp;
//			}
//		}
//	}
//	cout << "\nDisplay Array";
//	for (int i = 0; i < n; i++) {
//		cout << "\nArray[" << i << "]:" << arr[i];
//	}
//}