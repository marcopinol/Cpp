#include <iostream>
#include <cstdio> //stdio in C Lang
using namespace std;

int main(){
	char nome[80];
	
	cout << "Digite seu nome: ";
	gets(nome);
	cout << "Seu nome eh: " << nome << endl;
	
	system("PAUSE");
	return 0;
}
