#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n = 65;
	
	cout << '\n' << "Numero decimal 65 em diferentes bases: \n";
	cout << '\n' << "Hexadecimal:  " << hex << n; //shows decimal 65 in hex 
	cout << '\n' << "Octal:        " << oct << n; //show decimal 65 in octal
	cout << '\n' << "Decimal:      " << dec << n << endl; //shows 65 decimal in decimal (dhã)
	
	return 0;
}
