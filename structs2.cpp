#include <iostream>
using namespace std;

int main(){
	struct Venda{
		int pecas;
		float preco;
	} A = {20 , 110.00}, B = {3, 16.5}, Total;
	
	Total.pecas = A.pecas + B.pecas;
	Total.preco = A.preco + B.preco;
	
	cout << "Total de pecas vendidas: " << Total.pecas << endl;
	cout << "Total de dinheiro arrecadado: " << Total.preco << endl;
	
	system("PAUSE");
	return 0;
}
