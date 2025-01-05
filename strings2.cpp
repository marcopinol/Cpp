#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char nome[80];
	
	cout << "Digite seu nome: ";
	cin >> setw(5) >> nome;
	cout << "Seu nome eh: " << nome << endl;
	
	system("PAUSE");
	return 0;
}
