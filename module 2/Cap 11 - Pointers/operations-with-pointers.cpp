#include <iostream>
using namespace std;

int main(){
	int x = 5, y = 6, *px, *py;
	
	px = &x;
	py = &y;
	
	if(px > py)
		cout << "px - py = " << (px - py) << endl;
	else
		cout << "py - px = " << (py - px) << endl;
	cout << endl;
	
	cout << "px = " << px;
	cout << ", *px = " << *px;
	cout << ", &px = " << &px << endl;
	cout << endl;
	
	cout << "py = " << py;
	cout << ", *py = " << *py;
	cout << ", &py = " << &py << endl;
	cout << "\n=======================================\n" << endl;
	
	py++; //Go 4 bytes (int size) forward in memory
	
	cout << "py = " << py;
	cout << ", *py = " << *py;
	cout << ", &py = " << &py << endl;
	cout << endl;

	px = py + 5; //px = 20 bytes (5 * sizeof(int)) forward starting from py, or simple py address + 20 byter foward in memory
	
	cout << "px = " << px;
	cout << ", *px = " << *px;
	cout << ", &px = " << &px << endl;
	cout << endl;
	
	cout << "px - py = " << (px - py) << endl; //Shows the difference between px and py in pointer type size, so if this expression return 2 for example
													//that means 8 bytes (2 * sizeof(int)) of difference between them in memory
	system("PAUSE");
	return 0;
}
