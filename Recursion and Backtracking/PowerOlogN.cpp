#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, P;
    cout << "Enter the number:";
    cin >> N;
    cout << "Enter the power you want to raise your number:";
    cin >> P;
    cout << endl << endl << endl;
    cout << N << " to the power " << p << " is equal to: " << power(N, P);
    return 0;
}

int power(int n, int p) {
    int t;

    //base condition

    if (p == 0) {

        return 1;
    }

    //Recursive call

    t = power(n, p / 2);

    //Divide and conquor

    if (p % 2 == 0) {

        return t * t;
    }
    else {

        return n * t * t;
    }


}