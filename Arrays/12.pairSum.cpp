#include<bits/stdc++.h>
#include"helperFunctions.h"

void pairSum(int arr[], int size, int key) {
    int sum = 0;
    int i = 0;
    int j = size-1;

    while(i<j) {
        sum = arr[i]+arr[j];

        if(sum>key)
            j--;
        else if(sum<key)
            i++;
        else if(sum == key){
            cout << arr[i] << " and " <<  arr[j] << endl;
            i++;
            j--;
            
        }
    }

    if(i>=j) {
        cout << "Key not found" << endl;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[1000];
    int key;

    takeArrayInput(arr, n);
    
    cout << "Enter the sum : ";
    cin >> key;

    pairSum(arr, n, key);

    return 0;
}