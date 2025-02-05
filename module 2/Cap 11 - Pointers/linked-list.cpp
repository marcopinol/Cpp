#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;

struct Livro{
	char Titulo[30];
	char Autor[30];
	int NumReg;
	double preco;
	Livro *Anterior;
};

class ListaLigada{
	private:
		Livro *Fim;
	public:
		ListaLigada(){ //Default constructor
			Fim = (Livro *)NULL;
		}
		
		~ListaLigada();	
		void GetLivro();
		void PrintLivros();
};

void ListaLigada::GetLivro(){
	Livro *novoLivro = new Livro; //Heap allocation
	
	cout << "\nDigite o titulo: ";
	gets(novoLivro->Titulo);
	
	cout << "Digite o autor: ";
	gets(novoLivro->Autor);
	
	cout << "Digite o numero de registro: ";
	cin >> novoLivro->NumReg;
	
	cout << "Digite o preco: ";
	cin >> novoLivro->preco;
	
	//clears input
	cin.ignore(10, '\n');
	novoLivro->Anterior = Fim; //At the first run, this will be NULL
	Fim = novoLivro; //The book that we inserted
}

void ListaLigada::PrintLivros(){
	Livro *Atual = Fim;
	
	while(Atual != NULL){
		cout << endl;
		cout << "Titulo: " << Atual->Titulo << endl;
		cout << "Autor: " << Atual->Autor << endl;
		cout << "No.Reg: " << Atual->NumReg << endl;
		cout << "Preco: " << Atual->preco << endl;
		Atual = Atual->Anterior;
	}
}

ListaLigada::~ListaLigada(){
	Livro *Atual = Fim, *Anterior;
	
	do{
		Anterior = Atual->Anterior;
		delete Atual;
		Atual = Anterior;
	}while(Atual != NULL);
}

int main(){
	ListaLigada Lista;
	
	do{
		Lista.GetLivro();
		cout << "\nInserir outro livro? (s/n)";
	}while(getch() != 'n');
	
	cout << "\nLISTA DOS LIVROS CADASTRADOS";
	cout << "\n============================";
	Lista.PrintLivros();
	
	system("PAUSE");
	return 0;
}
