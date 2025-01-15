#include <iostream>
#include <iomanip>

#define MAX 100
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
		Venda addVenda(Venda v1);
};

int main(){
	Venda A[MAX], Total(0, 0.0);
	int i = 0;
	char resp;
	
	do{
		A[i++].getVenda();
		cout << "Gostaria de adicionar mais uma venda?";
		cin >> resp;
	}while(resp != 'n' && i < MAX);
	
	for(int j = 0; j < i; j++){
		cout << "Venda ............";
		A[j].printVenda();
		Total = A[j].addVenda(Total);
	}
	cout << "Total .............";
	Total.printVenda();
	cout << endl;
	
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

Venda Venda::addVenda(Venda v){
	Venda temp;
	temp.npecas = npecas + v.npecas;
	temp.preco = preco + v.preco;
	
	return temp;
}
