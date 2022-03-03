//#include<iostream>
//#include <string>
//using namespace std;
//int main() {
//	int i, first, last, middle;
//string NAME[14] = { "Allen", "Clark", "Dickens", "Edwards", "Goodman", "Hobbs", "Irwin",
//			 "Klein", "Lewis", "Morgan", "Richards", "Scott", "Tucker", "Walton" };
//  string num = "Goodman";
//  int counter = 0;
//	first = 0;
//	last = 13;
//	middle = (first + last) / 2;
//	while (first <= last)
//	{
//		counter++;
//		if (NAME[middle] < num)
//			first = middle + 1;
//		else if (NAME[middle] == num)
//		{
//			cout << "\nGoodman found at Position " << middle ;
//			cout << "\nGoodman found at comparison " << counter;
//			break;
//		}
//		else
//			last = middle - 1;
//		middle = (first + last) / 2;
//	}
//	if (first > last)
//		cout<< "\nGooodman is not found in given Array";
//	cout << endl;
//	return 0;
//}