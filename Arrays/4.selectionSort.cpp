#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i; j<=n-1; j++) {
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    selectionSort(arr,n);

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}