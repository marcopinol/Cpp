#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char salute[] = "Saudacoes, ";
	char nome[80];
	
	cout << "Digite seu nome: ";
	gets(nome);
	
	cout << salute << (nome + 5) << endl;
	
	system("PAUSE");
	return 0;
}
