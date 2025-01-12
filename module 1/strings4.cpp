#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char salute[] = "Saudacoes, ";
	char nome[80];
	
	cout << "Escreva seu nome: ";
	gets(nome);
	
	cout << salute << nome << endl;
	
	system("PAUSE")	;
	return 0;
}
