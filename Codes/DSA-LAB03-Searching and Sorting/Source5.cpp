//#include<iostream>
//using namespace std;
//int main() {
//	float item;
//	int n = 20,loc=0;
//    float array[20] = { 21.5,15.0,12.5,25.0,17.5,24.0,35.0,40.0,27.5,22.0,
//                                    33.0,12.5,23.5,10.25,5.5,45.5,19.25,12.25,32.0,20.0};
//	cout << "\nPrint array";
//	for (int i = 0; i < n; i++) {
//		cout << "\narray[" << i << "]=" << array[i];
//	}
//	//Sorting and Printing
//	cout << "\n***** Sorting and Printing *****";
//	for (int counter = 1; counter < n - 1; counter++) {
//		for (int j = 0; j < n - counter; j++) {
//			if (array[j] > array[j + 1]) {
//				float temp = array[j];
//				array[j] = array[j + 1];
//				array[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i <n; i++) {
//		cout << "\nArray[" << i << "] : " << array[i];
//	}
//	//Searching
//	cout << "\nEnter weight to search?";
//	cin >> item;
//	for (int j = 0; j < n; j++)
//	{
//		if (array[j] == item)
//		{
//			loc = j;
//		}
//	}
//	if (loc != 0)
//		cout << "\nWeight found at " << loc << " index";
//	else
//	{
//		cout << "\nWeight not found in the array!";
//	}
//
//	cout << "\nLightest Weight is : " << array[0];
//	cout << "\nHeaviest Weight is : " << array[19];
//
//	
//	return 0;
//}
