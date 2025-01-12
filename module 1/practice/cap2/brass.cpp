#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float latao, zinco, cobre;
	
	cout << "Insira quantos quilos de latao deseja: ";
	cin >> latao;
	cout <<'\n';
		
	cobre = latao * 0.3;
	zinco = latao * 0.7;
	
	cout << "Serao necessarios " << cobre << "Kg de cobre e " << zinco << "Kg de zinco para formar " << latao << "Kg de latao" << endl;
	
	system("PAUSE");
	
	return 0;
}
