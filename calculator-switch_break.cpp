#include <iostream>
using namespace std;

int main(){
	float n1, n2;
	char op;
	const int TRUE = 1;
		
	while(TRUE){
		cout << "\nDigite ZERO para sair do programa ou";
		cout << "\nnumero operador numero: ";
		cin >> n1 >> op >> n2;
		
		if(n1 == 0.0 || n2 == 0.0 || (op != '+' && op != '-' && op != '/' && op != '*'))
			break;
		
		switch(op){
			case '+':
				cout << (n1 + n2);
				break;
			case '-':
				cout << (n1 - n2);
				break;
			case '*':
				cout << (n1 * n2);
				break;
			case '/':
				cout << (n1 / n2);
				break;
			default:
				cout << "Operador inválido";
		}		
	}
	cout << endl;
	
	system("PAUSE");
	
	return 0;
}
