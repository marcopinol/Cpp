#include <iostream>
#include <iomanip>
using namespace std;

class Venda{
	private:
		int npecas;
		float preco;
	public:
		Venda(int np = 0, float p = 0): npecas(np), preco(p)
		{}
		
		void getVenda();
		void printVenda();
		Venda operator +(Venda& x) const;
};

int main(){
	Venda A(58, 12734.53), B, C(30, 6000.3), subtotal, total;
	
	B.getVenda();
	subtotal = A + B; //subtotal  = A.operator+(B);
	total = A + B + C; //With + binary operator overload, Total = A + B is possible
	cout << endl;
	
	cout << "Venda A..........";
	A.printVenda();
	cout << "Venda B..........";
	B.printVenda();
	cout << "SubTotal.........";
	subtotal.printVenda();
	cout << "Totais...........";
	total.printVenda();	
	
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
		 << setiosflags(ios::showpoint) 
		 << setprecision(2) 
		 << setw(10) << npecas;
	cout << setw(10) << preco << endl;	
}

Venda Venda::operator +(Venda& x) const{
	Venda temp;
	
	temp.npecas = npecas + x.npecas;
	temp.preco = preco + x.preco;
	
	return temp;
}
