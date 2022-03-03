//#include<iostream>
//using namespace std;
//int main() {
//	//char arr[6] = { 'A','B','C','D','E','F' };
//    string arr[15] = { "Allen","Clark","Dickens","Edwards","Fisher","Goodman","Hobbs","Inwin","Klein","Lewis","Morgan","Richards","Scott","Tucker","Walton" };
//	int beg = 0, end = 14;
//	int mid = (beg + end) / 2;
//	string item = "Nimra";
//	int counter = 0;
//	while (beg <= end) {
//		counter++;
//		cout << "\nMid = " << mid;
//		if (item<arr[mid]) {
//			end = mid - 1;
//		}
//		else {
//			beg = mid + 1;
//		}
//		mid = (beg + end) / 2;
//	}
//	if (arr[mid] != item) {
//		cout << "\nItem not found";
//	}
//	else {
//		cout << "\nAfter " << counter << " Comparisons";
//		cout << "\nItem found at " << mid;
//	}
//	return 0;
//}