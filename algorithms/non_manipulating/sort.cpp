#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]); // n=10, sizeof(arr)=40, sizeof(arr[0])=4
    // 4 bits per integer
    int asceding_sort(int arr, int n);
    int descending_sort(int arr, int n);
    
    // cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}

int asceding_sort(int arr[], int n)
{ 
    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    sort(arr, arr + n);
  
    cout << "\nArray after sorting using "
            "default sort is : \n";
    // for (int i = 0; i < n; ++i)
    //     cout << arr[i] << " ";
  
    // return 0;
}

// C++ program to demonstrate descending order sort using
// greater<>().
int descending_sort(int arr[], int n)
{
  
    sort(arr, arr + n, greater<int>());
  
    cout << "Array after sorting : \n";
    // for (int i = 0; i < n; ++i)
    //     cout << arr[i] << " ";
  
    // return 0;
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