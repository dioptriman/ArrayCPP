#include <iostream>
using namespace std;

/*
    Time Complexity -> O(N^3)
*/

int sumSubArray(int arr[], int n){
    int largestSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int currentSum = 0;
            for(int k = i; k <= j; k++){
                currentSum += arr[k];
            }

            largestSum = max(largestSum, currentSum);
        }
    }

    return largestSum;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    cout << sumSubArray(arr, n);
    return 0;
}