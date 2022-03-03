#include<iostream>
using namespace std;
int main() {
	int n = 7;
	int color[7];
	cout << "Enter Array elements" << endl;
	char arr[7];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//BUBBLE SORT
	int counter = 0;
	cout << "\nBUBBLE SORT SORT:";
	for (int pass = 1; pass < n; pass++) {
		for (int c = 0; c < n - pass; c++) {
			if (arr[c] > arr[c + 1]) {
				int temp = arr[c];
				arr[c] = arr[c + 1];
				arr[c + 1] = temp;
			}
			counter++;
		}
	}

	cout << "\nDisplay Sorted Array:";
	for (int i = 0; i < n; i++)
	{
		cout << "\nArray[" << i << "]:" << arr[i];
	}
	cout << "\nTotal Number of Comparisons :" << counter;
	cout << "\nSELECTION SORT:";
	counter = 0;
	int min = 0;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j <= n - 1; j++) {
			if (arr[j] < arr[min]) {
				counter++;
				min = j;
			}
		}
		counter++;
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;

	}

	cout << "\nDisplay Sorted Array:";
	for (int i = 0; i < n; i++)
	{
		cout << "\nArray[" << i << "]:" << arr[i];
	}
	cout << "\nTotal Number of Comparisons :" << counter;

	
}
