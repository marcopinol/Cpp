#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float a1, a2, a3, total, money = 780000;
	
	cout << "Digite a pontuacao do primeiro colocado: ";
	cin >> a1;
	cout << "\n\a";
	
	cout << "Digite a pontuacao do segundo colocado: ";
	cin >> a2;
	cout << "\n\a";
	
	cout << "Digite a pontuacao do terceiro colocado: ";
	cin >> a3;
	cout << "\n\a";
	
	total = a1 + a2 + a3;
	
	cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed) << setprecision(2);
	cout << "O primeiro colocado ganhou R$" << money * (a1 / total) << '\n';
	cout << "O segundo colocado ganhou R$" << money * (a2 / total) << '\n';
	cout << "O terceiro colocado ganhou R$" << money * (a3 / total) << '\n';
	
	system("PAUSE");
	
	return 0;
}
