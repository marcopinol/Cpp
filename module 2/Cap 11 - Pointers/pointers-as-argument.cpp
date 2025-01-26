#include <iostream>
using namespace std;

void reajusta20(float *p, float *r);

int main(){
	float val_preco, val_reaj;
	
	do{
		cout << "Insira o preco atual: ";
		cin >> val_preco;
		reajusta20(&val_preco, &val_reaj); //Sending addresses
		cout << "\nO preco novo eh: " << val_preco << endl;
		cout << "O aumento foi de " << val_reaj << endl;
	}while(val_preco != 0.0);
	
	system("PAUSE");
	return 0;
}

void reajusta20(float *p, float *r){
	*r = *p * 0.2;
	*p *= 1.2;
}
