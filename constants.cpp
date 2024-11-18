#include <iostream>
using namespace std;

namespace Teste {
	int a, b;
}

int main() {
	unsigned j = 4294967295UL; //UL means that constant is Unsigned Long type
	int a = 123;
	
	cout << "Variavel unsigned: " << j << endl;
	
	int i = j;
	
	cout << "Variavel signed: " << i << endl;
	
	system("PAUSE");
	
	Teste::a = 1;
	Teste::b = 34;
	
	cout << "Variavel em outro namespace: " << Teste::a << " " << Teste::b << endl; 
	
	return 0;
}
