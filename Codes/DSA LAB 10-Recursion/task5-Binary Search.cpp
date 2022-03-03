//#include <iostream>
//using namespace std;
//int binary(int *arr,int beg,int end,int val) {
//    if (beg > end) {
//        return -1;
//    }
//    else {
//        int mid = (beg + end) / 2;
//        if (val == arr[mid]) {
//            return 1;
//        }
//        else if (val > mid) {
//            return binary(arr, beg + 1, end, val);
//        }
//        else {
//           return binary(arr, beg, end-1, val);
//        }
//    }
//}
//int main() {
//    int arr[10] = { 2,6,13,21,20,19,8,11,27,30 };
//    int val,beg = 0, end = 9;
//    cout << "\nEnter value to search : ";
//    cin >> val;
//    int result= binary(arr, beg, end, val);
//    if (result > 0) {
//        cout << "Element found in array";
//    }
//    else {
//        cout << "Element not found in array!";
//    }
//    cout << endl;
//    return 0;
//}