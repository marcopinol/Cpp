#include <iostream>
using namespace std;

int main() {
	int ano, bis;
	
	cout << "Digite um ano para verificar se eh bissexto: " << '\n';
	cin >> ano;
	
	bis = (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0));

	cout << (bis == 1 ? "Bissexto" : "Nao Bissexto") << endl;
	
	system("PAUSE");
	
	return 0;
}
