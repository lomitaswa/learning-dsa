#include<bits/stdc++.h>
#include"helperFunctions.h"

using namespace std;

// To sort in increasing order set a > b.
// To sort in decreasing order set a < b.

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    
    takeArrayInput(arr, n);
    sort(arr, arr+n, compare);
    displayArray(arr, n);

    return 0;
}