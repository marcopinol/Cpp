#include <iostream>
using namespace std;

int juliana(int dia, int mes, int ano);

int main(){
	
	cout << juliana(1, 1, 2025) << endl;
	
	return 0;
}

int juliana(int dia, int mes, int ano){
	int juliana = (1461 * (ano + 4800 + (mes - 14) / 12)) / 4 +
			  (367 * (mes - 2 - 12 * ((mes - 14) / 12))) / 12 -
			  (3 * ((ano + 4900 + (mes - 14) / 12) / 100)) / 4 +
			  dia - 32075;
	
	return juliana;
}
