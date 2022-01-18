#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[1000][1000] = {0};

    int m, n;
    cin >> m >> n;

    int val = 10;
    for(int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            arr[row][col] = val;
            val += 10;
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}