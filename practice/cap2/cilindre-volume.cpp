#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float raio, altura, vol;
	
	cout << "Digite o raio do cilindro: ";
	cin >> raio;
	cout << '\n';
	
	cout << "Digite a altura do cilindro: ";
	cin >> altura;
	cout << '\n';
	
	vol = 3.141592 * raio * raio * altura;
	
	cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed) << setprecision(4);
	cout << "O volume deste cilindro eh: " << vol << " m3" << endl;
	
	return 0;
}