//#include<iostream>
//using namespace std;
//int main() {
//
//	int song[20] = { 20, 32, 33, 11, 34, 18, 22, 41, 28, 15, 18, 29, 31, 39, 35, 50, 18, 51, 12, 19 };
//
//	int n = 20;
//		for (int pass = 1; pass < n; pass++) {
//			for (int c = 0; c < n - pass; c++) {
//				if (song[c] > song[c + 1]) {
//					int temp = song[c];
//					song[c] = song[c + 1];
//					song[c + 1] = temp;
//				}
//			}
//		}
//
//	cout << "\nDisplay Sorted Array:";
//	for (int i = 0; i < 20; i++)
//	{
//		cout << "\nArray[" << i << "]:" << song[i];
//	}
//	cout << "\nThe highest number of songs are in " <<song[0];
//	cout << "\nThe Lowest number of songs are in " << song[19];
//	cout << endl;
//	system("pause");
//	return 0;
//
//}
