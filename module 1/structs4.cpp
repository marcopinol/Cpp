#include <iostream>
using namespace std;

struct Venda{
	int pecas;
	float preco;
};

void listaVenda(Venda C, Venda D);

int main(){
	Venda A, B;
	
	cout << "Venda A\n=======" << endl;
	cout << "Insira o numero de pecas: ";
	cin >> A.pecas;
	cout << "Insira o preco: ";
	cin >> A.preco;
	
	cout << "Venda B\n=======" << endl;
	cout << "Insira o numero de pecas: ";
	cin >> B.pecas;
	cout << "Insira o preco: ";
	cin >> B.preco;
	
	listaVenda(A, B);
	cout << endl;
	
	system("PAUSE");
	return 0;
}

void listaVenda(Venda C, Venda D){
	cout << "\n\nVenda total\n===========";
	cout << "\nTotal de pecas: " << (C.pecas + D.pecas);
	cout << "\nPreco total: " << (C.preco + D.preco);
}
