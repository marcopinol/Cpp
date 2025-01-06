#include <iostream>
#include <cstdio> //stdio.h in C
#include <cstring> //string.h in C
using namespace std;

int main(){
	char nome[80];
	
	cout << "Digite seu nome: ";
	gets(nome);
	
	int len = strlen(nome);
	
	for(int i = 0; i < len + 4; i++)
		cout << "Endereco do caractere: " << static_cast<const void*>(&nome[i]) << "\t\tChar: " << nome[i] 
			<< "\t\tDec: " << (int)(nome[i]) << endl;
	
	
	return 0;
}
