#include <iostream>
using namespace std;

int main() {
	int b = 10;
	
	int x = 2 * b++; //x receive 2 * b first and after this, b is incremented by one
	x = 2 * ++b //first b is incremented by one and after this, x receive 2 * b (note that b is incremented before the * operation in this case)
	
	cout << "\nX = " << x << '\n';
	cout<< "\nB = " << b << endl;
	
	return 0;
}
