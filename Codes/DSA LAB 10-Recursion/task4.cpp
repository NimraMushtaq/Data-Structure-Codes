//#include <iostream>
//using namespace std;
////int bubbleSort(int* arr, int n) {
////    if (n == 1) {
////        return 0;
////  }
////    else {
////        for (int i = 0; i < n-1; i++) {
////            if (arr[i + 1] < arr[i]) {
////                int temp = arr[i];
////                arr[i] = arr[i + 1];
////                arr[i + 1] = temp;
////            }
////        }
////        return bubbleSort(arr, n - 1);
////    }
////}
//int bubbleSort(int* arr, int n) {
//    //ASCENDING ORDER
//    if (n == 10) {
//        return 0;
//    }
//    else {
//        for (int i = 9; i > n ; i--) {
//            if (arr[i - 1] > arr[i]) {
//                int temp = arr[i];
//                arr[i] = arr[i - 1];
//                arr[i - 1] = temp;
//            }
//        }
//        return bubbleSort(arr, n + 1);
//    }
//}
//int main() {
//    int arr[10] = { 2,6,13,21,20,19,8,11,27,30 };
//    cout << "\nOriginal Array : ";
//    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << " ";
//    }
//    bubbleSort(arr, 1);
//    cout << "\nSorted Array : ";
//    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << " ";
//    }
//    return 0;
//}