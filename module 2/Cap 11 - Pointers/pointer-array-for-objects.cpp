#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

class Venda{
	private:
		int npecas;
		float preco;
	public:
		Venda(): npecas(0), preco(0.0) //Default constructor
		{}
		
		Venda(int pecas, float valor): npecas(pecas), preco(valor)
		{}
		
		void GetVenda();
		void PrintVenda() const;
};

int main(){
	Venda *p[80];
	int i = 0;
	
	do{
		p[i] = new Venda;
		p[i++]->GetVenda(); //Acessing method from object i via pointer because p is an array of Venda pointer
		cout << "Deseja entrar mais uma venda? (s/n)" << endl;
	}while(getch() != 'n');
	
	cout << "\nRELATORIO DE VENDAS" << endl;
	
	int j = 0;
	for(j; j < i; j++){
		cout << "Venda " << (j + 1);
		p[j]->PrintVenda();
		delete p[j];
	}

	system("PAUSE");
	return 0;
}

void Venda::GetVenda(){
	cout << "Digite a quantidade de pecas: ";
	cin >> npecas;
	cout << "Digite o valor total de todas as pecas: ";
	cin >> preco;
}

void Venda::PrintVenda() const{
	cout << setiosflags(ios::fixed) //not scientific notation
		 << setiosflags(ios::showpoint) //decimal point
		 << setprecision(2) //show 2 places
		 << setw(10) << npecas; //size 10
	cout << setw(10) << preco << endl;
}
