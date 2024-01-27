#include <iostream>
using namespace std;

/*
    Time Complexity -> O(N)
*/

int sumSubArray(int arr[], int n){
    int currentSum = 0;
    int largestSum = 0;

    for(int i = 0; i < n; i++){
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        largestSum = max(largestSum, currentSum);
    }

    return largestSum;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    cout << sumSubArray(arr, n);
    return 0;
}