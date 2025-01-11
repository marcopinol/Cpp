#include <iostream>
using namespace std;

union Numero{
	char str[30];
	int i;
	float f;
} x;

int main(){
	cout << sizeof(Numero) << " bytes." << endl;
	cout << sizeof(x) << " bytes." << endl;
	
	system("PAUSE")	;
	return 0;
}
