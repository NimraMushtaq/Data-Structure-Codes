//#include<iostream>
//using namespace std;
//void quickSort(int* arr, int start, int end)
//{
//    int i = start, j = end;
//    int tmp;
//    int pivot = arr[(start + end) / 2];
//    /* partition */
//    while (i <= j) {
//        while (arr[i] < pivot)
//            i++;
//        while (arr[j] > pivot)
//            j--;
//        if (i <= j) {
//            tmp = arr[i];
//            arr[i] = arr[j];
//            arr[j] = tmp;
//            i++;
//            j--;
//        }
//    }
//    /* recursion */
//    if (start < j)
//        quickSort(arr, start, j);
//    if (i < end)
//        quickSort(arr, i, end);
//}
//
//int main() {
//    int num = 10;
//    int arr[10] = { 26,5,37,1,61,11,59,15,48,19 };
//    cout << "\nUnsorted Array : ";
//    for (int i = 0; i < num; i++) {
//        cout << arr[i] << " ";
//    }
//    quickSort(arr, 0, num - 1);
//    cout << "\nSorted Array : ";
//    for (int i = 0; i < num; i++) {
//        cout << arr[i] << " ";
//    }
//}