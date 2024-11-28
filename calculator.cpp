#include <iostream>
using namespace std;

int main() {
	const int TRUE = 1;
	
	while(TRUE){
		float n1, n2;
		char op;
		
		cout << "\nDigite ZERO para terminar ou ";
		cout << "\nDigite numero operador numero: ";
		cin >> n1 >> op >> n2;
		
		if(n1 == 0.0 || n2 == 0.0 || (op != '+' && op != '-' && op != '*' && op != '/'))
			break;
			
		if(op == '+')
			cout << (n1 + n2);
		else if(op == '-')
			cout << (n1 - n2);
		else if(op == '*')
			cout << (n1 * n2);
		else if (op == '/')
			cout << (n1 / n2);
		else
			cout << "Operador desconhecido";
	}
	cout << endl;
	
	system("PAUSE");
	
	return 0;
}
