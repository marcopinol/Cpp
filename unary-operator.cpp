#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int& A = n;
	
	cout << A << '\n';
	
	A = 8;
	
	cout << n << '\n';
	
	system("PAUSE");
	
	return 0;
}
