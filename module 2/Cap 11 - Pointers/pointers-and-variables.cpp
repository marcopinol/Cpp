#include <iostream>
using namespace std;

int main(){
	int x, y, *px, *py;
	
	px = &x; //int pointer receiving x address
	*px = 14; //Same as x = 14;
	y = *px; //Same as y = x;
	
	cout << "y = " << y << endl;
		
	system("PAUSE");
	return 0;
}
