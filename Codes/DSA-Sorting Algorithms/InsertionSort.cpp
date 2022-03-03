//#include<iostream>
//using namespace std;
//int main() {
//	int arr[6] = { 77,33,44,11,88,22 };
//	int n = 6,key,j;
//	for (int i = 1; i <= n - 1; i++)
//	{
//		key = arr[i];
//			 j = i - 1;
//		while (j >= 0 && arr[j] > key)
//		{
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = key;
//	}
//
//	cout << "\nDisplay Array";
//	for (int i = 0; i < n; i++) {
//		cout << "\nArray[" << i << "]:" << arr[i];
//	}
//	return 0;
//}