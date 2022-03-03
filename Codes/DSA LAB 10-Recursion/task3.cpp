//#include <iostream>
//using namespace std;
//int occur(int *arr,int len,int num,int count) {
//    if (len<0) {
//        return count;
//    }
//    else {
//        if (num == arr[len])
//        {
//            count++;
//        }
//       return occur(arr, len - 1, num,count);
//        cout << "\nCount : " << count;
//    }
//}
//int main() {
//    int len = 15;
//    int count,val;
//    int arr[15] = { 1,2,5,6,2,4,3,2,1,4,3,5,2,3,1 };
//    for (int i = 0; i < 15; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << "\nEnter number you want to count : ";
//    cin >> val;
//    count=occur(arr, len, val,0);
//    cout << "Number repeated " << count << " times";
//    return 0;
//}