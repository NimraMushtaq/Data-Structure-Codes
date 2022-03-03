//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string NAME[14] = { "Allen", "Clark", "Dickens", "Edwards", "Goodman", "Hobbs", "Irwin",
//						 "Klein", "Lewis", "Morgan", "Richards", "Scott", "Tucker", "Walton" };
//	for (int i = 0; i < 14; i++)
//	{
//		cout << "\nNAME[" << i << "]: " << NAME[i];
//	}
//	int beg=0, end=13,mid=0;
//	int loc,counter=0;
//	//int item = 9;
//	string item = "Goodman";
//	mid = (beg + end) / 2;
//	while(beg <= end) {
//		counter++;
//		if (item == NAME[mid]) {
//
//			cout << "\nGoodman is found at " << mid << " index";
//			break;
//		}
//		else if (NAME[mid]>item) {
//			end = mid - 1;
//		}
//		else {
//			beg = mid + 1;
//		}
//		mid = (beg + end) / 2;
//
//	}
//	if (beg > end) {
//		cout << "\nGoodman is not found in the array";
//	}
//	cout << "\nNo of comparisons are : " << counter;
//	return 0;
//}
