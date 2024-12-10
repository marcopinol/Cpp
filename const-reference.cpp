#include <iostream>
#include <iomanip>
using namespace std;

void imprime(const double& n, const double& m);

int main(){
	double n1, n2;
	
	cout << "Digite dois numeros: ";
	cin >> n1 >> n2;
	
	imprime(n1, n2);
	
	system("PAUSE");
	
	return 0;
}

void imprime(const double& n, const double& m){
	cout << setprecision(20);
	cout << "O quadrado de " << n << " eh " << n*n << endl;
	cout << "O quadrado de " << m << " eh " << m*m << endl;
}
