#include <iostream>
#include <cstring>
using namespace std;

class Aluno{
	private:
		static const int TAM = 50;
		static int num;
		char nomeAluno[TAM];
		int serie;
		int grau;
	public:
		Aluno(): serie(0), grau(0){
			nomeAluno[0] = '\0';
		}
		
		Aluno(const char nome[], int s, int g): serie(s), grau(g){
			strncpy(nomeAluno, nome, TAM - 1);
			nomeAluno[TAM-1] = '\0';
			num++;
		}
		
		~Aluno(){
			num--;
		}
		
		void novoAluno();
		
		void listarAluno();
		
		static void numAlunos();
};

int const Aluno::TAM;
int Aluno::num = 0;

int main(){
	Aluno Alu1;
	Aluno al[10];
		
	Alu1.novoAluno();
	Alu1.listarAluno();
	cout << endl;
	
	al[0].novoAluno();
	al[0].listarAluno();
	cout << endl;
	
	Aluno::numAlunos();
	
	system("PAUSE");
	return 0;
}

void Aluno::novoAluno(){
	cout << "Insira o nome do aluno: ";
	cin.ignore();
	cin.getline(nomeAluno, TAM);
	cout << "Insira o numero da serie do aluno: ";
	cin >> serie;
	cout << "Insira o numero do grau da serie (1, 2 ou 3): ";
	cin >> grau;
	Aluno::num++;
}

void Aluno::listarAluno(){
	cout << "Aluno ----------------" << endl;
	cout << "Nome: " << nomeAluno << endl;
	cout << "Serie: " << serie << endl;
	cout << "Grau: " << grau << endl;
}

void Aluno::numAlunos(){
	cout << "Quantidade de alunos cadastrados: " << Aluno::num << endl;
}
