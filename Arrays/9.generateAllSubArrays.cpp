#include<bits/stdc++.h>
#include"helperFunctions.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];

    takeArrayInput(arr, n);

    for(int i=0; i<n; i++) {
        
        for(int j=i; j<n; j++) {
            
            for(int k=i; k<=j; k++)
                cout << arr[k] << " ";
            
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}