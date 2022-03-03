//#include <iostream>
//#include<chrono>
//using namespace std;
//void insertionsort(int arr[])
//{
//	clock_t c_start, c_end;
//	c_start = clock();
//
//	int temp, pass=0;
//	int key,j;
//
//	for (int i = 1; i < 20; i++) {
//		  key = arr[i];
//		  j = i - 1;
//		 while ((j >= 0) && (arr[j] > key)) {
//			 pass++;
//			 arr[j + 1] = arr[j];
//			 j--;
//			
//		}
//		 arr[j + 1] = key;
//		
//	}
//
//
//	cout << "After Insertion sort: " << endl;
//	for (int i = 0; i < 20; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	
//	cout << "Number of passes: " << pass << endl;
//	c_end = clock();
//	double time;
//	time = double(c_end - c_start) / (double)(CLOCKS_PER_SEC);
//	cout << "Time taken is " << time << endl;
//}
//void selectionsort(int arr[])
//{
//	clock_t c_start, c_end;
//	c_start = clock();
//	int temp, pass = 0;
//
//	for (int i = 0; i < 19; i++)
//	{
//		int min = arr[i];
//		int loc = i;
//		for (int j = i + 1; j <= 19; j++)
//		{
//			if (min > arr[j])
//			{
//				pass++;
//				min = arr[j];
//				loc = j;
//				
//			}
//	
//		}
//		temp = arr[i];
//		arr[i] = arr[loc];
//		arr[loc] = temp;
//
//
//	}
//	cout << "After Selection sort: " << endl;
//	for (int i = 0; i < 20; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	cout << "Number of passes: " << pass << endl;
//	c_end = clock();
//	double time;
//	time = double(c_end - c_start) / (double)(CLOCKS_PER_SEC);
//	cout << "Time taken is " << time << endl;
//}
//
//void bubblesort(int arr[])
//{
//	clock_t c_start, c_end;
//	c_start = clock();
//
//	int temp;
//	int passes = 0;
//
//	for (int pass = 1; pass < 20; pass++)
//	{
//		for (int c = 0; c < 20 - pass; c++)
//		{
//			if (arr[c] > arr[c + 1])
//			{
//				passes++;
//				temp = arr[c];
//				arr[c] = arr[c + 1];
//				arr[c + 1] = temp;
//		
//
//			}
//
//		}
//	}
//
//	cout << "After Bubble sort: " << endl;
//	for (int i = 0; i < 20; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	cout << "Number of passes: " << passes << endl;
//	c_end = clock();
//	double time;
//	time = double(c_end - c_start) / (double)(CLOCKS_PER_SEC);
//	cout << "Time taken is " << time << endl;
//}
//
//int main()
//{
//
//	int array[20] = { 20, 19, 15, 50, 12, 14, 18, 16, 13, 21, 23, 8, 9, 11,34,24,25,26,31,32 };
//
//	int array1[20] = { 20, 19, 15, 50, 12, 14, 18, 16, 13, 21, 23, 8, 9, 11,34,24,25,26,31,32 };
//
//	int array2[20] = { 20, 19, 15, 50, 12, 14, 18, 16, 13, 21, 23, 8, 9, 11,34,24,25,26,31,32 };
//	bubblesort(array);
//	insertionsort(array1);
//	selectionsort(array2);
//
//	system("pause");
//	return 0;
//}
