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
	
	rabbits = foots / 4 - heads / 2;
	ducks = heads - rabbits;
	
	cout << "Coelhos: " << rabbits << '\n';
	cout << "Patos: " << ducks << endl;
	
	return 0;
}
