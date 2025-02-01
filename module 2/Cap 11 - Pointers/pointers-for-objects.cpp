#include <iostream>
#include <iomanip>
using namespace std;

class Venda{
	private:
		int npecas;
		float preco;
	public:
		Venda(): npecas(0), preco(0.0)
		{}
		
		Venda(int pecas, float valor): npecas(pecas), preco(valor)
		{}
		
		void GetVenda();
		void PrintVenda() const;
};

void Venda::GetVenda(){
	cout << "Insira No.Pecas: ";
	cin >> npecas;
	cout << "Insira o valor: ";
	cin >> preco;
}

void Venda::PrintVenda() const{
	cout << setiosflags(ios::fixed) //not scientific notation
		 << setiosflags(ios::showpoint) //decimal point
		 << setprecision(2) << setw(10) << npecas; //two places and size 10
	cout << setw(10) << preco << endl;
}

int main(){
	Venda A;
	Venda *B;
	
	B = new Venda[1];
	
	A.GetVenda();
	B->GetVenda();
	
	A.PrintVenda();
	B->PrintVenda();
	
	system("PAUSE");
	return 0;
}
