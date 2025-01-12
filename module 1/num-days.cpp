#include <iostream>
using namespace std;

int main(){
	int dmes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int dia, mes, ano, total;
	char ch;
	
	cout << "Digite a data no formato DD/MM/AAAA: ";
	cin >> dia >> ch >> mes >> ch >> ano;
	
	if((!(ano % 4) && ano % 100) || !(ano % 400))
		dmes[1] = 29;
	
	total = dia;
	
	for(int i = 0; i < mes - 1; i++){
		total += dmes[i];
	}
	
	cout << "Total de dias transcorridos: " << total << endl;
	
	system("PAUSE");
	return 0;
}
