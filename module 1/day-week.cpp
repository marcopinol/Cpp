#include <iostream>
#include <conio.h>
using namespace std;

int dWeek(int dia, int mes, int ano);

int main(){
	char diasemana[7][14] = {"Domingo", 
							{'S', 'e', 'g', 'u', 'n', 'd', 'a', '-', 'f', 'e', 'i', 'r', 'a', '\0'}, 
							"Terca-feira", 
							"Quarta-feira", 
							"Quinta-feira", 
							"Sexta-feira", 
							"Sabado"};
	
	int dia, mes, ano;
	const char ESC = 27;
	
	do{
		system("cls");
		cout << "Digite a data na forma dd mm aaaa: ";
		cin >> dia >> mes >> ano;
		
		cout << diasemana[ dWeek(dia, mes, ano)] << '\n';
		cout << "Aperte ESC para terminar ou ENTER para recomecar." << endl;
	}while(getch() != ESC);
	
	return 0;
}

int dWeek(int dia, int mes, int ano){
	int dWeek = ano + dia + 3 * (mes - 1) - 1;
	
	if(mes < 3)
		ano--;
	else
		dWeek -= (int)(0.4 * mes + 2.3);
	
	dWeek += (int)(ano / 4) - (int)((ano / 100 + 1) * 0.75);
	dWeek %= 7;
	
	return dWeek;
}
