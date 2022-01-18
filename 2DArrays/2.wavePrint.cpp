#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[1000][1000] = {0};

    int m,n;
    cin >> m >> n;

    int val = 1;
    for (int row=0; row < m; row++) {
        for ( int col = 0; col < n; col++) {
            arr[row][col] = val;
            val = val+1;
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl << "Wave print of the array will be : \n" << endl;

    for (int col = 0; col < n; col++) {
        if (col%2 == 0) {
            for (int row = 0; row < m; row++)
                cout << arr[row][col] << " ";
        } else {
            for (int row = m-1; row >= 0; row--) 
                cout << arr[row][col] << " ";
        }
        cout << "  ";
    }
    cout << endl;
    return 0;
}