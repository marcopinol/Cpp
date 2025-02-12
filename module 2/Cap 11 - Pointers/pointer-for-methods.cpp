#include <iostream>
using namespace std;

class Calculadora{
	private:
		float a, b;
	public:
		Calculadora(): a(0.0), b(0.0)
		{}
		
		Calculadora(float a, float b): a(a), b(b)
		{}
		
		float add(){
			return (a + b);
		}
		
		float sub(){
			return (a - b);
		}
		
		float mult(){
			return (a * b);
		}
		
		float div(){
			return (a / b);
		}
};

typedef float (Calculadora::*PFunc)(); //Defining PFunc as float Calculadora:: pointer to methods

int main(){
	bool check = true;
	Calculadora x(2.8, 3.1);
	PFunc ptrf[4] = {Calculadora::add, Calculadora::sub, Calculadora::mult, Calculadora::div};
	
	do{
		int i;
		cout << "0 - SAIR" << endl;
		cout << "1 - Adicao" << endl;
		cout << "2 - Subtracao" << endl;
		cout << "3 - Multiplicacao" << endl;
		cout << "4 - Divisao" << endl;
		cin >> i;
		
		if(i <= 0 || i > 4){
			check = false;
			continue;
		}

		cout << (x.*ptrf[i-1])() << endl;
	}while(check == true);
	
	return 0;
}
