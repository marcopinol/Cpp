#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int cont = 0;
	
	while(getche() != '\r'){
		cont++;
	}
	cout << "\nO numero de caracteres eh " << cont << endl;
	
	return 0;
}
