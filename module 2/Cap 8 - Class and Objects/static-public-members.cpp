#include <iostream>
using namespace std;

class Moeda{
	private:
		float RS;
	public:
		static float USS;
		Moeda(){
			cout << "Digite R$: ";
			cin >> RS;
		}
		Moeda(float x): RS(x)
		{}
		float USdolar(){
			return RS/USS;
		}
};

float Moeda::USS; //needed for compile time

int main(){
	cout << "Digite o valor do dolar: ";
	cin >> Moeda::USS;
	
	Moeda A(6), B;
	
	cout << "A eh US$ " << A.USdolar() << endl;
	cout << "B eh US$ " << B.USdolar() << endl;
	
	system("PAUSE")	;
	return 0;
}
