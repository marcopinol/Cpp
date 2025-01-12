#include <iostream>
using namespace std;

int main(){
	const int c = 80; //c é uma constante e não pode ser modificada
	
	cout << "const c = " << c <<endl;
	
	//O código a seguir gera um erro;
	//Estamos querendo modificar o valor de uma constante...
	//int r = ++c
	
	int result = ++(const_cast<int&>(c)); //modificando para int&
	
	//o valor resultante é 81, mas c continua sendo a constante 80;
	
	cout << "Removendo o qualificador const e incrementando de 1.";
	cout << "\nNovo valor = " << result << endl;
	
	cout << "c = " << c << endl;
	
	system("PAUSE");
	
	return 0;
}
