#include <iostream>
using namespace std;

int main() {
	int x, r;
	
	cout << "\nDigite um numero de ate 4 algarismos: ";
	cin >> x;
	
	r = 19998 + x;
	
	cout << "\nO resultado da soma eh: " << r;
	cout << "\nDigite o segundo numero: ";
	cin >> x;
	
	cout << "\nO meu numero eh: " << (9999 - x);
	cout << "\nDigite o quarto numero: ";
	cin >> x;
	
	cout << "\nO meu numero eh: " << (9999 - x) << endl;
	
	system("PAUSE");
	
	return 0;
}