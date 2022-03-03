//#include<iostream>
//#include<math.h> 
//#include<chrono>
//using namespace std;
//void binary(int arr[], int search) {
//	clock_t c_start, c_end;
//	c_start = clock();
//	int comp = 0;
//	int beg = 0, end = 19, mid = (beg + end) / 2;
//	while ((beg <= end) && (arr[mid] != search)) {
//		if (search < arr[mid]) {
//			end = mid - 1;
//		}
//		else {
//			beg = mid + 1;
//		}
//
//		mid = (end + beg) / 2;
//		comp++;
//	}
//	if (arr[mid] == search) {
//		cout << "\nItem found at " << mid;
//		cout << "\nNo of comparisons " << comp;
//		c_end = clock();
//		double time;
//		time = (double(c_end - c_start)) / (double)CLOCKS_PER_SEC;
//		cout << "\nTime = " << time << " sec " << endl;
//	}
//	else {
//		cout << "\nItem not found in array";
//	}
//}
//void linear(int arr[], int search) {
//	clock_t c_start, c_end;
//	c_start = clock();
//	int flag = 0, comp=0;
//	int i = 0;
//	while ((i < 20) && (search != arr[i])) {
//		i++;
//		comp++;
//	}
//	if (arr[i] == search) {
//		cout << "\nItem found";
//		cout << "\nNo of Comparisons : " << comp;
//	}
//	else
//	{
//
//		cout << "\nItem not found";
//	}
//	c_end = clock();
//	double time;
//	time = double(c_end - c_start) / (double)CLOCKS_PER_SEC;
//	cout << "\nTime = " << time << " sec " << endl;
//}
//int main()
//{
//	int search;
//	int arr[20] = { 10, 11, 12, 20, 21, 22, 30, 31, 32, 40, 41, 42, 50, 51, 52, 60, 61, 62, 70, 80 };
//	cout << "\nEnter No you want to search : ";
//	cin >> search;
//	cout << "\nLinear Search ";
//	linear(arr, search);
//	cout << "\nBinary Search";
//	binary(arr, search);
//	system("pause");
//	return 0;
//
//}
