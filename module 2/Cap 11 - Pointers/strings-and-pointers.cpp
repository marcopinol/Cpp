#include <iostream>
#include <cstdio>
using namespace std;

char* procura(char *s, char ch);

int main(){
	char str[81], *ptr;
	
	cout << "Digite uma frase: ";
	gets(str);
	
	ptr = procura(str, 'h');
	
	cout << "\nA frase comeca no endereco " << reinterpret_cast<unsigned *>(str) << endl;
	
	if(ptr){
		cout << "\nPrimeira ocorrencia do caractere 'h': " << reinterpret_cast<unsigned *>(ptr) << endl;
		cout << "\nA sua posicao eh: " << (ptr - str) << endl;
	}else
		cout << "O caractere 'h' nao existe nesta frase." << endl; 
	
	system("PAUSE");
	return 0;
}

char* procura(char *s, char ch){
	while(*s != ch && *s != '\0')
		s++;
	if(*s != '\0')
		return s;
	return (char *)0;
}
