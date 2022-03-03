//#include<iostream>
//using namespace std;
//int Partition(int* arr, int start, int end)
//{
//
//    int pivot = arr[end];
//    int pindex = start;
//    for (int i = start; i <= end - 1; i++)
//    {
//        if (arr[i] <= pivot)
//        {
//            int temp = arr[i];
//            arr[i] = arr[pindex];
//            arr[pindex] = temp;
//            pindex = pindex + 1;
//        }
//    }
//    int temp = arr[end];
//    arr[end] = arr[pindex];
//    arr[pindex] = temp;
//    //Swap(A[Pindex], A[end]
//    return pindex;
//}
//void quickSort(int* arr, int start, int end)
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
//    int num = 10;
//    int arr[10] = { 26,5,37,1,61,11,59,15,48,19 };
//    cout << "\nUnsorted Weights : ";
//    for (int i = 0; i < num; i++) {
//        cout << arr[i] << " ";
//    }
//    quickSort(arr, 0, num-1);
//    cout << "\nSorted Weights : ";
//    for (int i = 0; i < num; i++) {
//        cout << arr[i] << " ";
//    }
//}