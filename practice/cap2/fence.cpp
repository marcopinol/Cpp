#include <iostream>
using namespace std;

int main() {
	int heads, foots, rabbits, ducks;	
	
	cout << "Dentro de um cercado ha x coelhos e x patos" << '\n';
	cout << "Digite o numero de cabecas que o cercado mantem: ";
	cin >> heads;
	cout << '\n';
	
	cout << "Digite o numero de patas que o cercado mantem: ";
	cin >> foots;
	cout << '\n';
	
	ducks  = 2 * heads - foots / 2;
	rabbits = heads - ducks;
	
	cout << "Coelhos: " << rabbits << '\n';
	cout << "Patos: " << ducks << endl;
	
	return 0;
}
