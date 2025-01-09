#include <iostream>
using namespace std;

struct Venda{
	int pecas;
	float preco;
};

void listaVenda(Venda& C, Venda& D); //structs as argument by reference
Venda novaVenda(void);

int main(){
	Venda A, B;
	
	A = novaVenda();
	B = novaVenda();
	
	listaVenda(A, B);
	cout << endl;	
	
	system("PAUSE");
	return 0;
}

void listaVenda(Venda& C, Venda& D){
	cout << "\n\nVenda total\n===========";
	cout << "\nTotal de pecas: " << (C.pecas + D.pecas);
	cout << "\nPreco total: " << (C.preco + D.preco);
}

Venda novaVenda(void){
	Venda X;
	
	cout << "\nNova venda\n==========" << endl;
	cout << "Insira o numero de pecas: ";
	cin >> X.pecas;
	cout << "Insira o preco: ";
	cin >> X.preco;
	
	return X; //return an struct
}
