#include <iostream>
#include <cstdio>
using namespace std;

void func(char * (*p)(char *));

int main(){
	char * (*p)(char *); //p is a pointer to an char * type funtion that receive an char * as arg
	p = gets; //p receiving gets address
	
	func(p); //p as arg
	
	system("PAUSE");
	return 0;
}

void func(char * (*p)(char *)){
	char nome[80];
	
	cout << "Digite seu nome: ";
	(*p)(nome); //It's like calling gets(nome);
	
	cout << "Seu nome eh: " << nome << endl;
}
