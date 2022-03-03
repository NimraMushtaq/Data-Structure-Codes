//#include<iostream>
//using namespace std;
//const int num = 10;
//void merge(int[], int, int, int);
//void merge_sort(int* arr, int low, int high)
//{
//	int mid;
//	if (low < high) {
//		//divide the array at mid and sort independently using merge sort
//		mid = (low + high) / 2;
//		merge_sort(arr, low, mid);
//		merge_sort(arr, mid + 1, high);
//		//merge or conquer sorted arrays
//		merge(arr, low, high, mid);
//	}
//}
//// Merge sort
//void merge(int* arr, int low, int high, int mid)
//{
//	int i, j, k, c[num];
//	i = low;
//	k = low;//Starting Index of *arr 
//	j = mid + 1;
//	while (i <= mid && j <= high) {
//		if (arr[i] < arr[j]) {
//			c[k] = arr[i];
//			k++;
//			i++;
//		}
//		else {
//			c[k] = arr[j];
//			k++;
//			j++;
//		}
//	}
//  //When one array is complete but other is left then we copy all elements to *arr
//	while (i <= mid) {
//		c[k] = arr[i];
//		k++;
//		i++;
//	}
//	while (j <= high) {
//		c[k] = arr[j];
//		k++;
//		j++;
//	}
//	for (i = low; i < k; i++) {
//		arr[i] = c[i];
//	}
//}
//int main()
//{
//	int arr[10] = { 100, 200, 450, 270, 150, 70, 280, 590, 610, 330 };
//	cout << "\nUnsorted Products\n";
//	for (int i = 0; i < num; i++) {
//		cout << arr[i] << " ";
//	}
//	merge_sort(arr, 0, 9);
//	cout << "\nSorted Products\n";
//	for (int i = 0; i < num; i++) {
//		cout << arr[i] << " ";
//	}
//}
