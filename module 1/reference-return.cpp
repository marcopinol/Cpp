#include <iostream>
using namespace std;

int x;
int& initx(void);

int main(){
	initx() = 567;
	
	cout << x << endl;
	
	system("PAUSE");
	
	return 0;
}

int& initx(){
	
	return x;
}
