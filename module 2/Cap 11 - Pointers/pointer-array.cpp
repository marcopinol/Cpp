#include <iostream>
#include <conio.h>
using namespace std;

int dsemana(int dia, int mes, int ano);

int main(){
	char *diasemana[7] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"}; //Will pop a warning
	int dia, mes, ano;
	const char ESC = 27;
	
	do{
		cout << "Digite a data na forma dd mm aaaa: ";
		cin >> dia >> mes >> ano;
		cout << diasemana[dsemana(dia, mes, ano)] << endl;	
	}while(getch() != ESC);
	
	system("PAUSE");
	return 0;
}

int dsemana(int dia, int mes, int ano){
	int dSemana = ano + dia + 3 * (mes - 1) - 1;
	
	if(mes < 3)
		ano --;
	else
		dSemana -= int(0.4 * mes + 2.3);
	
	dSemana += int(ano / 4) - int((ano / 100 + 1) * 0.75);
	dSemana %= 7;
	
	return dSemana;
}
