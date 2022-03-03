//#include<iostream>
//using namespace std;
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
//	int i, j, k, c[30];
//	i = low;
//	k = low;
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
//// read input array and call mergesort
//int main()
//{
//	int finalPile[30];
//	int pile1[15] = { 52,37,63,14,17,8,6,25,100,200,450,270,150,70,280};
//	int pile2[15] = { 51,36,67,15,19,9,5,24,99,202,444,279,146,72,289 };
//		int num=15;
//	cout << "\nPile 1:\n";
//	for (int i = 0; i < num; i++) {
//		cout << pile1[i]<<" ";
//	}
//	cout << "\nPile 2:\n";
//	for (int i = 0; i < num; i++) {
//		cout << pile2[i]<<" ";
//	}
//		int j1 = 0, j2 = 0;
//	cout << "\nMerged both Piles";
//	for (int i = 0; i < 30; i++)
//	{
//		if (i <=14) {
//				finalPile[i] = pile1[j1];
//				//cout << finalPile[i] << " ";
//				j1++;
//	    }
//		if(i>=15) {
//
//				finalPile[i] = pile2[j2];
//				//cout << finalPile[i] << " ";
//				j2++;
//		}
//		
//	}
//
//	merge_sort(finalPile, 0, 29);
//	cout << "\nSorted Copies\n";
//	for (int i = 0; i < 30; i++) {
//		cout << finalPile[i] << " ";
//	}
//}
