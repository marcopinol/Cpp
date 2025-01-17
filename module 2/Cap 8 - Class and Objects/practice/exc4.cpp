#include <iostream>
#include <cstring>
using namespace std;

class Mes{
	private:
		char nomemes[10];
		char abvr[4];
		int dias;
		int numMes;
	public:
		Mes(): nomemes("1"), abvr("1"), dias(1), numMes(1)
		{}
		Mes(const char nome[], const char abrev[], int adia, int num): dias(adia), numMes(num){
			strncpy(nomemes, nome, 10);
			strncpy(abvr, abrev, 4);
		}
		
		static int totalDias(int numM);
		
		static int totalDias(const char imes[]);
};


int main(){
	Mes meses[13] = {{"zero", "zer", 0, 0}, {"Janeiro", "JAN", 31, 1}, {"Fevereiro", "FEV", 28, 2}, {"Marco", "MAR", 31, 3}, 
					{"Abril", "ABR", 30, 4}, {"Maio", "MAI", 31, 5}, {"Junho", "JUN", 30, 6}, {"Julho", "JUL", 31, 7}, 
					{"Agosto", "AGO", 31, 8}, {"Setembro", "SET", 30, 9}, {"Outubro", "OUT", 31, 10}, {"Novembro", "NOV", 30, 11},
					{"Dezembro", "DEZ", 31, 12}};
	
	cout << Mes::totalDias(12) << endl;
	cout << Mes::totalDias("Dezembro") << endl;
	
	return 0;
}

int Mes::totalDias(int numM){
	int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int totaldias = 0;
	
	for(int i = 0; i < numM - 1; i++)
		totaldias += dias[i];
	
	return totaldias;
}

int Mes::totalDias(const char imes[]){
	char Meses[13][10] = {"zero", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", 
						  "Setembro", "Outubro", "Novembro", "Dezembro"};

	for(int i = 1; i <= 12; i++){
		if(strcmp(Meses[i], imes) == 0){ //Is the input month == Meses[i]?
			return (Mes::totalDias(i));
		}
	}
	return -1;
}
