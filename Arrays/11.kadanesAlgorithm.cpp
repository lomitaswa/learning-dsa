#include<bits/stdc++.h>
#include"helperFunctions.h"

using namespace std;

int kadanesAlgorithm(int arr[], int size) {

    int cs = 0;
    int ms = 0;

    for(int i=0; i<size; i++) {
        cs = cs + arr[i];

        if(cs < 0)
            cs = 0;
        ms = max(cs,ms);
    }

    return ms;

}

int main() {
    int n;
    cin >> n;
    int arr[1000];
    
    takeArrayInput(arr, n);
    cout << "Max sum is " << kadanesAlgorithm(arr, n) << endl;

    return 0;
}