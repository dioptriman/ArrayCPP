#include <iostream>
using namespace std;

/*
    The search can be non-monotonic but remember it's sacrificing the time complexity
    Big O -> O(N), depends how big the N is.
*/

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 12, 8, 20, 9, 14, 15};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin >> key;

    int indexLinSearch = linearSearch(arr, n, key);

    cout << indexLinSearch;

    return 0;
}
    
