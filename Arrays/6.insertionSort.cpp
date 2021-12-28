#include<bits/stdc++.h>
#include"helperFunctions.h"
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i=1; i <= size-1; i++) {
        int currentElement = arr[i];
        int j=i-1;

        while(j>=0 and arr[j]>currentElement) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = currentElement;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    takeArrayInput(arr, n);
    insertionSort(arr, n);
    displayArray(arr, n);
    return 0;
}