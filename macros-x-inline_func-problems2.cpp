#include <iostream>
using namespace std;

inline min(int x, int y){
	return ((x < y) ? x : y);
}

//using inline function
int main(){
	int n1 = 1, n2 = 2, n;
	
	n = min(n1++, n2++);
	
	cout << "n1 = " << n1 << "\tn2 = " << n2 << "\tn = " << n << endl;
	
	system("PAUSE");
	
	return 0;
}
