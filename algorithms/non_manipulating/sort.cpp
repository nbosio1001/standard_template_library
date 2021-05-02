#include <bits/stdc++.h>
using namespace std;

void show(int arr[], int n){
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 }; // size of array always 10
    int n = sizeof(arr) / sizeof(arr[0]); // n=10, sizeof(arr)=40, sizeof(arr[0])=4
    
    cout << "The array before sorting is : \n";
    
    // Print array
    show(arr, n);
    
    // Asceding Sort
    sort(arr, arr + n);
    // int asc_arr[] = sort(arr, arr + n);

    cout << "\n Array after sorting using "
        "default sort is : \n";
    show(arr, n);

    // Descending Sort
    sort(arr, arr + n, greater<int>());
    
    cout << "\n Array after descending sorting : \n";
    show(arr, n);

    return 0;
}


/*__________________________________________________________________*/
// A C++ program to demonstrate STL sort() using our own comparator

// An interval has a start 
// time and end time
// struct Interval {
//     int start, end;
// };
  
// // Compares two intervals 
// // according to staring times.
// bool compareInterval(Interval i1, Interval i2)
// {
//     return (i1.start < i2.start);
// }
  
// int main()
// {
//     Interval arr[]
//         = { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
//     int n = sizeof(arr) / sizeof(arr[0]);

//         // sort the intervals in increasing order of
//     // start time
//     sort(arr, arr + n, compareInterval);
  
//     cout << "Intervals sorted by start time : \n";
//     for (int i = 0; i < n; i++)
//         cout << "[" << arr[i].start << "," << arr[i].end
//              << "] ";
  
//     return 0;
// }