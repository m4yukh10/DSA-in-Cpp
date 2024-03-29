#include <iostream>
using namespace std;
int main() {
  int arr[] = {19,12,1,17,16,2,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  // bubble sort
  for (int i = n - 1; i>=0; i--){
    for (int j = 0; j<=i-1; j++) {
      if (arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  for (int i = 0; i<n; i++){
    cout << arr[i] << endl;
  }
}
