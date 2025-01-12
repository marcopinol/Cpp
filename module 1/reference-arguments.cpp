#include <iostream>
using namespace std;

void reajusta20(float& p, float& r);

int main(){
	float preco, val_reaj;
	
	do{
		cout << "Insira o preco atual ou 0 para terminar: ";
		cin >> preco;
		
		reajusta20(preco, val_reaj);
		
		cout << "preco novo          = " << preco << endl;
		cout << "Aumento             = " << val_reaj << endl;
	}while(preco != 0.0);
	
	system("PAUSE");
	
	return 0;
}

void reajusta20(float& p, float& r){
	r = p * 0.2;
	p = p * 1.2;
}
