#include<bits/stdc++.h>
#include"helperFunctions.h"
using namespace std;

void bubbleSort(int arr[], int size) {
    for(int i=1; i<=size-1; i++) {
        for(int j=0; j<=(size-i-1); j++) {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    takeArrayInput(arr,n);
    bubbleSort(arr,n);
    displayArray(arr,n);
    return 0;
}