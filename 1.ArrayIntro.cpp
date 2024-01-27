//Array Program
#include <iostream>
using namespace std;

int main(){
    // Initialize an array if not it will gives a garbage value
    int marks[100] = {0};

    int n;

    cout << "Enter the no of students : ";
    cin >> n;

    //Input
    for(int i=0; i<n; i++){
        cin >> marks[i];

        //Update
        marks[i] = marks[i] * 2;
    }

    //Output
    for(int i=0; i<100; i++){
        cout << marks[i] << " ,";
    }

    cout << endl;

    return 0;
}