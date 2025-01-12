#include <iostream>
using namespace std;

int main() {
	int n, soma = 0;
	
	cout << "Digite um numero: " << endl;
	cin >> n;
	cout << "O quadrado de " << n << " eh ";
	
	if(n < 0) 
		n = -n;
		
	for(int i = 1; n > 0; n--){
		soma += i;
		i += 2;
	}
	
	cout << soma << endl;
	
	system("PAUSE");
	
	return 0;
}
