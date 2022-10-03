#include<bits/stdc++.h>
using namespace std;

void nextGreaterPermutation(vector<int> &arr) {
   reverse(arr.begin(), arr.end());
   if (isSorted(arr.begin(), arr.end())) {
       return;
   }
   int index = 0;
   for (int i = 1; i < arr.size(); i++) {
       if (arr[i - 1] > arr[i]) {
           index = i;
           break;
       }
   }
   for (int i = 0; i < index; i++) {
       if (arr[i] > arr[index]) {
           swap(arr[i], arr[index]);
           break;
       }
   }
   reverse(arr.begin(), arr.begin() + index);
   reverse(arr.begin(), arr.end());
}
