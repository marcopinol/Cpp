#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

class Cliente{
	private:
		char nome[40];
	public:
		void GetNome(){
			cout << "Digite o nome: ";
			cin.ignore(10, '\n'); //clears the input buffer
			gets(nome);
		}
		
		virtual void Print(){
			cout << "     Cliente: " << nome << endl;
		}
};

class Assegurado : public Cliente{
	private:
		char seguradora[40];
		int numSeguro;
	public:
		void GetSeguro(){
			cout << "Digite o nome da seguradora: ";
			gets(seguradora);
			cout << "Digite o número do seguro: ";
			cin >> numSeguro;
		}
		
		void Print() override{
			Cliente::Print();
			cout << "     Seguradora: " << seguradora << endl;
			cout << "     Numero do seguro: " << numSeguro << endl;
		}
};

class NaoAssegurado : public Cliente{
	private:
		float consulta;
		int banco;
	public:
		void GetValor(){
			cout << "Valor da consulta: ";
			cin >> consulta;
			cout << "Banco: ";
			cin >> banco;
		}
		
		void Print() override{
			Cliente::Print();
			cout << setprecision(2) << setiosflags(ios::fixed);
			cout << "     Valor da consulta: " << consulta << endl;
			cout << "     Banco: " << banco << endl;
		}
};

int main(){
	Cliente *paciente[100];
	Assegurado *asseg;
	NaoAssegurado *naoAsseg;	
	int n = 0;
	char opcao;
	
	do{
		cout << "\nAssegurado (s/n)?: ";
		cin >> opcao;
		
		if(opcao == 's'){
			asseg = new Assegurado;
			asseg->GetNome();
			asseg->GetSeguro();
			paciente[n++] = asseg;
		}else{
			naoAsseg = new NaoAssegurado;
			naoAsseg->GetNome();
			naoAsseg->GetValor();
			paciente[n++] = naoAsseg;
		}
		cout << "\nInserir outro cliente? (s/n): ";
		cin >> opcao;
	}while(opcao == 's');
	
	for(int i = 0; i < n; i++){
		paciente[i]->Print();
		cout << endl;
	}
		
	for(int i = 0; i < n; i++)
		delete paciente[i];
	
	system("PAUSE");
	return 0;
}
