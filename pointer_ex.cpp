#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int* p = &x;  // Reference to x

	cout << *p << endl;  
	return 0;

}