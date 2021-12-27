#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int s = 0;
    int e = n-1;

    while(s <= e) {
        int mid = (s+e)/2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            e = mid-1;
        else 
            s = mid+1;
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[1000];

    for(int i=0; i<n; i++)
        cin >> arr[i];
    int key;
    cout << "Enter the key : ";
    cin >> key;

    int pos = binarySearch(arr, n, key);

    if(pos == -1)
        cout << "Not Found" << endl;
    else 
        cout << "Found at " << pos << endl;
    
    return 0;
}