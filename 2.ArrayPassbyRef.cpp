#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};

    // Calculate how many elements in the array
    int n = sizeof(arr)/sizeof(int);

    printArr(arr, n);

}