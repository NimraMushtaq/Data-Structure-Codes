//#include<iostream>
//using namespace std;
//int main()
//{
//	string array[14] = { "Allen", "Clark", "Dickens", "Edwards", "Goodman", "Hobbs", "Irwin",
//						 "Klein", "Lewis", "Morgan", "Richards", "Scott", "Tucker", "Walton" };
//	//USING BINARY SEARCH
//	string item = "Goodman";
//	int beg = 1, mid, end = 13;
//	int loc = 0, comp = 0;
//	mid = (beg + end) / 2;
//	while ((beg <= end) && (array[mid] != item))
//	{
//		comp++;
//		if (item < array[mid])
//		{
//			end = mid - 1;
//		}
//		else {
//			beg = mid + 1;
//		}
//	}
//	mid = int((beg + end) / 2);
//	if (array[mid] == item) {
//		cout << "\nGoodman found at " << mid << " index ";
//		cout << "\nIt required " << comp << " comparisons";
//	}
//	system("pause");
//	return 0;
//
//
//}
