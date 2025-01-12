#include <iostream>
using namespace std;

int main() {
	int i = 3, n;	
	
	//in other compilers, execution can be right-to-left or left-to-right, it varies depending on the compiler
	cout << "\nn = " << ((n = i * (i + 1) + (++i))) << '\n' << endl; 
		
	return 0;
}
