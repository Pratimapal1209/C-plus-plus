// array sorted or not


#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {

  int arr[] = {56, 77, 89, 101, 1000}, n = 5;

  cout<<isSorted(arr, n) ? "true" : "false";

}