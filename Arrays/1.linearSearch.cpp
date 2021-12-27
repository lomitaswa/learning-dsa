#include<iostream>
using namespace std;

void linearSearch(int arr[], int key, int n) {
    int i;

    for(i=0; i<n; i++) {
        if(arr[i] == key) {
            cout << key << " is present at " << i << endl;
            break;
        }
    }
    if(i==n){
        cout << key << " is not present." <<endl;
    }
}

int main() {
    int n,key,i;

    int arr[1000];
    cin >> n;
    
    for(i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Enter key : ";
    cin >> key;

    linearSearch(arr,key,n);
    
    return 0;
}