#include<bits/stdc++.h>
#include"helperFunctions.h"
using namespace std;

int main() {
    int array[1000];
    int N;
    cout << "Enter the number of buildings";
    cin >> N;
    cout << "Enter the length of buildings one by one";
    takeArrayInput(array, N);
    SunnyBuilding(array, N);
    return 0;
}

void SunnyBuilding(int arr[], int n) {
    int count = 0;
    int comp = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] >= comp) {
            count++;
            comp = arr[i];
        }
    }
    cout << "Sunlight will fall on " << count << " buildings";
}