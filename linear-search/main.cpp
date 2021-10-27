// Linear search is an algorithm to find an integer in an given array, It is slow, but, Fast when the length of the array is less.
#include <iostream>
using namespace std;

int main() {
  int arr[] = { 10, 20, 30, 40, 50 };
  int k = 30;
  for (int i = 0; i < arr.length(); i ++) {
    if (arr[i] == k) {
      cout << i << endl;
      break
    }
  }
}
