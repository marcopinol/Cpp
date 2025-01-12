#include <iostream>
using namespace std;

int main() {
	const char bip = '\a'; //constant declaration
	const double pi = 3.141592; //constant declaration
	double raio;
	
	cout << "\nDigite o raio da esfera: ";
	cin >> raio;
	
	double area = 4.0 * pi * raio * raio;
	
	cout << bip;
	cout << "\nArea da esfera = " << area << endl;
	
	system("PAUSE");
	
	return 0;
}