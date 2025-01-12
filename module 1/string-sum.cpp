#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char salute[100] = "Saudacoes, ";
	char nome[80];
	
	cout << "Digite seu nome: ";
	gets(nome);
	
	strcat(salute, nome); //concatenates the first str in the second str
	
	cout << salute << endl;
	
	system("PAUSE");
	return 0;
}
