#include <iostream>

#define MIN(x, y) (x < y) ? (x) : (y)
using namespace std;

//using macros
int main(){
	int n1 = 1, n2 = 2, n;
	
	n = MIN(n1++, n2++);
	
	cout << "n1 = " << n1 << "\tn2 = " << n2 << "\tn = " << n << endl;
	
	system("PAUSE");
	
	return 0;
}
