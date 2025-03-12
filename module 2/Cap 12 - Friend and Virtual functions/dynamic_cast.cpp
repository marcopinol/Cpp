//Shows the use of dynamic_cast<> operator with pointers
//Needs RTTI to run
#include <iostream>
using namespace std;

class Pessoa{
	protected:
		char nome[80];
	public:
		Pessoa(const char *n){
			strcpy(nome, n);
		}
		virtual void Print() = 0; //pure virtual
};

class Professor : public Pessoa{
	private:
		float SalarioHora;
	public:
		Professor(const char *n, float s): Pessoa(n), SalarioHora(s) {}
		
		void Print() override{
			cout << "\nProfessor: " << nome << endl;
		}
		
		void PrintSalario(){
			cout << "Salario hora: " << SalarioHora << endl;
		}
};

class Estudante : public Pessoa{
	public:
		Estudante(const char *n): Pessoa(n) {}
		
		void Print() override{
			cout << "\nEstudante: " << nome << endl;
		}
};

void PrintSalario(Pessoa *pDesconhecido){
	Professor *pProf;
	if(pProf = dynamic_cast<Professor *>(pDesconhecido))
		pProf->PrintSalario();
	else
		cout << "Nao tem salario." << endl;
}

int main(){
	Pessoa *Jose = new Estudante{"Jose"};
	Pessoa *Carlos = new Professor{"Carlos", 25.82};
	
	Carlos->Print();
	PrintSalario(Carlos);
	
	Jose->Print();
	PrintSalario(Jose);
	
	delete Jose;
	delete Carlos;
	
	return 0;
}
