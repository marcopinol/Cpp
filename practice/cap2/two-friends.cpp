#include <iostream>
using namespace std;

int main() {
	//two friends play in lottery every week, this exercise consist in divide the parts proportionally to them
	float money;
	float f1, f2, total;
	
	cout << "Digite a quantia do premio que os amigos apostaram juntos: ";
	cin >> money;
	cout << '\n'; 
	
	cout << "Digite a quantia que o amigo 1 apostou: ";
	cin >> f1;
	cout << '\n';
	
	cout << "Digite a quantia que o amigo 2 apostou: ";
	cin >> f2;
	cout << '\n';
	
	total = f1 + f2;
	
	f1 /= total;
	f2 /= total;
	
	cout << "O premio de " << money << " vai ser dividido " << money * f1 << " para o amigo 1 e " << money * f2 << " para o amigo 2." << endl;
	
	return 0;
}