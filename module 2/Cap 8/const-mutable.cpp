#include <iostream>
#include <cstring>
using namespace std;

class Cliente{
	private:
		char nome[80];
		char CPF[15];
		mutable int idade; //mutable member can be modified by a const method even if it is a const object
	public:
		Cliente(): nome("null"), CPF("null"), idade(0){ //Default constructor
		}
		Cliente(const char n[], const char cpf[], int i); //Constructor with 3 args
		void mudaIdade(int i) const;
		void printDados() const;
};

int main(){
	const Cliente x("Marcelo", "672.348.440-15", 31); //Const object
	
	x.printDados();
	x.mudaIdade(32);
	x.printDados();
	
	system("PAUSE")	;
	return 0;
}

Cliente::Cliente(const char n[], const char cpf[], int i){
	strcpy(nome, n);
	strcpy(CPF, cpf);
	idade = i;
}

void Cliente::printDados() const{
	cout << "Nome do cliente: " << nome << endl;
	cout << "CPF do cliente: " << CPF << endl;
	cout << "Idade do cliente: " << idade << endl;
	cout << endl;
}

void Cliente::mudaIdade(int i) const{
	idade = i; //Can modify const object
}
