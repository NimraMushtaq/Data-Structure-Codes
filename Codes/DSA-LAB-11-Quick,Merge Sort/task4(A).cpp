//#include<iostream>
//using namespace std;
//int Partition(int*arr, int start, int end)
//{
//    int pivot = arr[end];
//    int pindex = start;
//        for (int i = start; i<=end - 1;i++)
//        {
//            if(arr[i] <= pivot)
//            {
//                int temp = arr[i];
//                arr[i] = arr[pindex];
//                arr[pindex] = temp;
//                    pindex = pindex + 1;
//            }
//        }
//        int temp = arr[end];
//        arr[end] = arr[pindex];
//        arr[pindex] = temp;
//        return pindex;
//}
//void quickSort(int*arr,int start,int end)
//{
//    if (start < end)
//    {
//        int pindex = Partition(arr, start, end);
//        quickSort(arr, start, pindex - 1);
//        quickSort(arr, pindex + 1, end);
//    }
//}
//
//int main() {
//    int arr[10] = { 112,1,0, 37, 63, 14, 17, 8, 6, 25 };
//    cout << "\nUnsorted Array : ";
//    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << " ";
//    }
//    quickSort(arr, 0, 9);
//    cout << "\nSorted Array : ";
//    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << " ";
//    }
//}