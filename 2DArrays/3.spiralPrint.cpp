#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int arr[][1000], int m, int n) {
    int startRow = 0;
    int endRow = m-1;
    int startCol = 0;
    int endCol = n-1;

    while( startRow <= endRow and startCol <= endCol) {

            for(int i=startCol; i<=endCol; i++) {
                cout << arr[startRow][i] << " ";
            }
            startRow++;
        
            for(int i=startRow; i<=endRow; i++) {
                cout << arr[i][endCol] << " ";
            }
            endCol--;
        
        if(endRow > startRow) {
            for(int i=endCol; i>=startCol; i--) {
                cout << arr[endRow][i] << " ";
            }
            endRow--;
        }
        
        if(endCol > startCol) {
            for(int i=endRow; i>=startRow; i--) {
                cout << arr[i][startCol] << " ";
            }
            startCol++;
        }
    }
}

int main() {
    int arr[1000][1000] = {0};

    int m, n;
    cin >> m >> n;

    int val = 1;
    for(int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            arr[row][col] = val;
            val += 1;
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    spiralPrint(arr, m, n);
    return 0;
}