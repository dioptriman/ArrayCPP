#include <iostream>
using namespace std;

/*
    Time Complexity -> O(N^2)
*/

int sumSubArray(int arr[], int n){
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for(int x = 1; x < n; x++){
        prefix[x] = prefix[x-1] + arr[x];
    }



    int largestSum = 0;


    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int currentSum =  i > 0 ? prefix[j] - prefix[i-1] : prefix[j];
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