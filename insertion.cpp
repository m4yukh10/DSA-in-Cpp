#include <iostream>
using namespace std;

int main() {
  int arr[100];
  int a,pos,item;
  cout << "how many elements? \n";
  cin >> a;
  //array created
  for (int i = 0; i<a; i++){
    cin >> arr[i];
  }
  //position and item taken
  cout << "enter item to be inserted: \n";
  cin >> item;
  cout <<"enter position: \n";
  cin >> pos;
  //insertion process
  for (int k = a; k>=pos; k--){
    arr[k+1] = arr[k];
  }
  arr[pos] = item;
  a+=1;
  // display the new array
  cout << "The new array elements are: \n";
  for (int j = 0; j<a;j++){
    cout << arr[j] << "\n";
  }
  
}
