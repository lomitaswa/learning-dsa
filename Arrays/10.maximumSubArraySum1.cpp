#include<bits/stdc++.h>
#include"helperFunctions.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    int currentSum = 0;
    int maxSum = 0;

    int left = -1;
    int right = -1;

    takeArrayInput(arr, n);

    for(int i=0; i<n; i++) {
        
        for(int j=i; j<n; j++) {
            
            currentSum = 0;
            for(int k=i; k<=j; k++)
                currentSum += arr[k];
            
            if(currentSum > maxSum) {
                maxSum = currentSum;
                left = i;
                right = j;
            }
            
        }
    }

    cout << "Maximum sub array sum  is  : " << maxSum <<endl;

    for(int k=left; k<=right; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}