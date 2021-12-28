#include<bits/stdc++.h>
#include"helperFunctions.h"
using namespace std;

// To sort in increasing order set a > b.
// To sort in decreasing order set a < b.

bool compare(int a, int b) {
    return a > b;
}

void bubbleSort(int arr[], int size, bool (&cmp)(int a, int b)) {
    
    for(int i=1; i<=size-1; i++) {
        for(int j=0; j<=(size-i-1); j++) {
            if(cmp(arr[j], arr[j+1]))
                swap(arr[j], arr[j+1]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    takeArrayInput(arr, n);
    bubbleSort(arr, n, compare);
    displayArray(arr, n);
    return 0;
}