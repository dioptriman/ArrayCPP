#include <iostream>
using namespace std;
/*
    The Search Space should be monotonic :
    1. Increasing
    2. Non - increasing or Decreasing

    If not sorted, sort it first 

    Big O : O(log n) -> Time Complexity
*/

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    
    while(s <= e){
        int mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

    }

    return -1;

}



int main(){
    int arr[] = {10, 20, 30, 40, 60, 90, 120};
    int n = sizeof(arr) / sizeof(int);
    int key;
    
    cin >> key;

    int binSearchIndex = binarySearch(arr, n, key);

    cout << binSearchIndex;


    return 0;
}