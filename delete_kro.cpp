#include <iostream>

using namespace std;

int main(){
  int arr[100] = {1,2,3,4,5,6};
  int a = 6;
  int pos = 2;
  for (int i = pos; i<a; i++){
    arr[i] = arr[i+1];
  }
  a-=1;
  cout << "the new array elements are: \n";
  for (int j = 0; j<a; j++){
    cout << arr[j] << "\n";
  }
  
  
}
