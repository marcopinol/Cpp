#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int dias;
	float din;
	
	cout << "Insira a quantidade de dias trabalhados: ";
	cin >> dias;
	cout << '\n';
	
	din = 20 * dias;
	din -= din * 0.08;
	
	cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed) << setprecision (2);
	cout << "Seu pagamento com o desconto de 8% eh de: R$" << din << '\n' << endl;
	
	system("PAUSE");
	
	return 0;
}
