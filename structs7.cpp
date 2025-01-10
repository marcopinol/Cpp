#include <iostream>
#include <iomanip>
#include <cstdlib> //for atoi(), atof(), and exit()
#include <cstdio> //for gets()
#include <conio.h> //for getch()
using namespace std;

struct Data{
	int dia;
	char mes[10];
	int ano;	
};

struct Venda{
	Data diaVenda;
	int pecas;
	float preco;	
};

void listaVenda(void);
void novaVenda(void);

Venda vendas[50]; //creates an array of structs
Venda Total = {{0, "", 0}, 0, 0.0}; //Creates an Venda variable type

int n = 0;
const int TRUE = 1;
const char ESC = 27;

int main(){
	char ch;
	
	while(TRUE){
		cout << "Digite E para entrar uma venda" << endl;
		cout << "       L para listar as vendas" << endl;
		cout <<	"       ESC para terminar" << endl;
		
		ch = getch();
		
		switch(ch){
			case 'E':
				novaVenda();
				break;
			case 'L':
				listaVenda();
			case ESC:
				exit(0);
			default:
				cout << "Opcao invalida!" << endl;
		}
	}
	
	system("PAUSE");
	return 0;
}

void novaVenda(void){
	char temp[80];
	
	cout << "Dia: "; 
	gets(temp);
	vendas[n].diaVenda.dia = atoi(temp);
	
	cout << "Mes: ";
	gets(vendas[n].diaVenda.mes);
	
	cout << "Ano: ";
	gets(temp);	
	vendas[n].diaVenda.ano = atoi(temp);
	
	cout << "Pecas: ";
	gets(temp);
	vendas[n].pecas = atoi(temp);
	
	cout << "Preco: ";
	gets(temp);
	vendas[n].preco = atof(temp);
	
	Total.pecas += vendas[n].pecas;
	Total.preco += vendas[n++].preco;
}

void listaVenda(void){
	if(!n){
		cout << "Lista vazia." << endl;
		return;
	}
	
	cout << setprecision(2);
	cout << "\n\nRelatorio" << endl;
	
	for(int i = 0; i < n; i++){
		cout << setw(2) << vendas[i].diaVenda.dia << " de " << setw(10) << vendas[i].diaVenda.mes
			<< " de " << setw(4) << vendas[i].diaVenda.ano;
		cout << setw(10) << fixed << vendas[i].pecas;
		cout << setw(20) << fixed << vendas[i].preco << endl;
	}
	
	cout << "\nTotal";
	cout << setw(29) << fixed << Total.pecas;
	cout << setw(20) << fixed << Total.preco;
	cout << "\n\n";
}
