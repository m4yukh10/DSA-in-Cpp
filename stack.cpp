#include <iostream>
using namespace std;
int stack[100], size = 5;
int top = -1;

void insert(int element){
	if (top == size - 1){
		cout << "overflow";
	}
	else {
		top += 1;
		stack[top] = element;
	}
}
void deletion(){
	if (top == -1){
		cout << "underflow";
	}
	else {
		top = top - 1;
	}
}
void display(){
	cout << "the elements: " <<endl;
	for (int i = 0; i<=top; i++){
		cout << stack[i] << endl;
	}
}
int main() {
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	insert(9);
	deletion();
	display();
}
  
