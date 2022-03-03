//#include<iostream>
//using namespace std;
//int main() {
//	int array[10];
//	int n = 10;
//		cout << "\nEnter values for array : ";
//		for (int i = 0; i < 10; i++) {
//			cout << "\nArray[" << i + 1 << "] : ";
//			cin >> array[i];
//		}
//		for (int counter = 1; counter < n; counter++) {
//			for (int i = 0; i < n - counter; i++) {
//				if (array[i] < array[i + 1]) {
//					int temp = array[i];
//					array[i] = array[i + 1];
//					array[i + 1] = temp;
//				}
//			}
//		}
//		cout << "\nPrint Array in Descending Order : ";
//		for (int i = 0; i < 10; i++) {
//			cout << "\nArray[" << i + 1 << "] :  " << array[i];
//		}
//}