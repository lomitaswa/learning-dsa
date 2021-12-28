#include<iostream>
using namespace std;

void takeArrayInput(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
}

void displayArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
