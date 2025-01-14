#include <iostream>
#include <iomanip>
using namespace std;

class Venda{
	private:
		int npecas;
		float preco;
	public:
		Venda(): npecas(0), preco(0.0) //Default constructor
		{}
		Venda(int np, float p){ //Constructor with arguments
			npecas = np;
			preco = p;
		}
		void getVenda();
		void printVenda();
		Venda addVenda(Venda& x) const;
};

int main(){
	Venda A(58, 12734.53), B, Total;
	
	B.getVenda();
	Total = A.addVenda(B);
	cout << endl;
	
	cout << "Venda A..........";
	A.printVenda();
	cout << "Venda B..........";
	B.printVenda();
	cout << "Totais...........";
	Total.printVenda();	
	
	system("PAUSE");
	return 0;
}

void Venda::getVenda(){
	cout << "Insira o numero de pecas: ";
	cin >> npecas;
	cout << "Insira o valor: ";
	cin >> preco;
}

void Venda::printVenda(){
	cout << setiosflags(ios::fixed) 
		 << setiosflags(ios::showpoint) << setprecision(2) << setw(10) 
		 << npecas << setw(10) << preco << endl;
	cout << setw(10) << preco << endl;	
}

Venda Venda::addVenda(Venda& x) const{
	Venda temp; //temporary object
	temp.npecas = npecas + x.npecas;
	temp.preco = preco + x.preco;
	
	return temp;
}
