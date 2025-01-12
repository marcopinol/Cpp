#include <iostream>
#include <cstring>
using namespace std;

struct Corpo{
	float altura;
	float peso;
} Joao;

struct Casal{
	Corpo p1;
	Corpo p2;
};

struct Tempo{
	int hora;
	int min;
	int seg;
};

enum Marca {Fiat = 1, Hyunday, Renault, Volkswagen, Kia, Nissan, Honda, Ford, Audi, Mercedes, Jaguar, Jeep};
enum Frutas {Maca, Figo, Manga, Uva};
enum diasMes {dJan = 31, dFev = 28, dMar = 31, dAbr = 30, dMai = 31, dJun = 30, dJul = 31, dAgo = 31, dSet = 30, dOut = 31, dNov = 30, dDez = 31};
enum meses {Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};

struct Estacionamento {
	Tempo entrada;
	Tempo saida;
	char placa[8];
	Marca marca;
} carro;

union Dados {
	int i;
	float f;
	char c[10];
} d;

union Dados1 {
	int i;
	double f;
	char c[5];
} d1;

struct XXX{
	float f;
	union{
		float ff;
		int x[2];
	};
} VV;

struct Mes{
	char nome[10];
	char abrv[4];
	diasMes dias;
	meses nmes;
};

Mes months[12];

int main(){	
	Joao.altura = 1.68;
		
	Casal x[10];
	x[0] = {{1.63, 59.5}, {1.78, 82.5}};
	
	Frutas Arvore = Figo, Feirante = Uva, Diferenca;

	{
		strcpy(months[0].nome, "Janeiro");
		strcpy(months[0].abrv, "Jan");
		months[0].dias = dJan;
		months[0].nmes = Jan;
	}
	
	cout << months[0].nome << endl;
	cout << months[0].abrv << endl;
	cout << months[0].dias << endl;
	cout << months[0].nmes << endl;
		
	system("PAUSE");
	return 0;
}
