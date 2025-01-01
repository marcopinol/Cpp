#include <iostream>
using namespace std;

#define IMPAR(x) (((x) % 2 == 0) ? 0 : 1)

#define MAIOR(x, y, z) (((x) > (z)) ? (((x) > (y) ? (x) : (y))) : (((z) > (y))) ? (z) : (y))

#define IS_NUMBER(ch) (((ch) >= 48 && (ch) <= 57) ? 1 : 0)

#define TO_NUMBER(ch) (((ch) >= '0' && (ch) <= '9') ? ((int)((ch) - '0')) : 0)

int main(){
	int x = 7, y = 8, z = 9;
	char ch = '4';
	
	cout << IMPAR(x) << endl;
	cout << MAIOR(z, y, x) << endl;
	cout << IS_NUMBER(ch) << endl;
	cout << TO_NUMBER(ch) << endl;
	
	system("PAUSE");
	
	return 0;
}