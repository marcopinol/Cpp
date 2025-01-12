#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int verdadeiro, falso;
	
	verdadeiro = (15 < 20);
	falso = (15 ==20);
	
	cout << setfill('.');
	cout << "Verdadeiro " << setw(8) << verdadeiro << '\n';
	cout << "Falso" << setw(14) << falso << endl;
	
	return 0;
}
