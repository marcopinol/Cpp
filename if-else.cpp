#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char ch;
	int cont = 0;
	
	cout << "Digite uma frase" << endl;
	
	while((ch = getch()) != '\r'){
		if(ch == '0'){
			cout << "\nZERO DETECTADO" << endl;
			cont++;
		}
	}
	
	if(cont > 0)
		cout << "Voce digitou " << cont << " zeros." << endl;
	else
		cout << "Voce nao digitou nenhum zero." << endl;
		
	system("PAUSE");
	
	return 0;
}
