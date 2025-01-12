#include <iostream>
using namespace std;

struct Data{
	int dia;
	char mes[10];
	int ano;
};

struct Venda{
	int pecas;
	float preco;
	Data diavenda;
};

int main(){
	Venda A = {20, 110.00, {7, "Novembro", 2022}};
	
	cout << "Pecas: " << A.pecas << endl;
	cout << "Preco: " << A.preco << endl;
	cout << "Data: " << A.diavenda.dia << " de " << A.diavenda.mes << " de " << A.diavenda.ano << endl;
	
	system("PAUSE");
	return 0;
}
