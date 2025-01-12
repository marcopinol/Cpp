#include <iostream>
using namespace std;

int juliana(int dia, int mes, int ano);
void diaSemana(int x);

int main(){
	
	int x = juliana(5, 5, 2025);
	
    diaSemana(x);
    
    cout << endl;
	
	system("PAUSE");
		
	return 0;
}

int juliana(int dia, int mes, int ano){
	int juliana = (1461 * (ano + 4800 + (mes - 14) / 12)) / 4 +
			  (367 * (mes - 2 - 12 * ((mes - 14) / 12))) / 12 -
			  (3 * ((ano + 4900 + (mes - 14) / 12) / 100)) / 4 +
			  dia - 32074;
	
	return juliana;
}

void diaSemana(int x){
	int dia = x % 7;
	
	switch(dia){
		case 0:
			cout << "Domingo";
			break;
		case 1:
			cout << "Segunda-feira";
			break;
		case 2:
			cout << "Terca-feira";
			break;
		case 3:
			cout << "Quarta-feira";
			break;
		case 4:
			cout << "Quinta-feira";
			break;
		case 5:
			cout << "Sexta-feira";
			break;
		case 6:
			cout << "Sabado";
			break;
		default:
			cout << "Data invalida";
			break;	
	}			
}
