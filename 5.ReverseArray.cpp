#include <iostream>
using namespace std;

/*
    The time complexity -> O(N)
*/

void reverseArray(int arr[], int n){
    int s = 0;
    int e = n - 1; 
    
    while(s < e){
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}


int main(){
    int arr[] = {10, 60, 50, 40, 29, 33};
    int n = sizeof(arr) / sizeof(n);

    reverseArray(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}