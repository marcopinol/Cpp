#include <iostream>
#include <cstring>
using namespace std;

class BasAg{
	protected:
		static const int TAM = 80;
		char Nome[TAM];
		char Numero[4];
	public:
		BasAg(){
			Nome[0] = '\0';
			Numero[0] = '\0';
		}
		
		BasAg(const char n[], const char ng[]){
			if(strlen(n) < TAM)
				strncpy(Nome, n, TAM - 1);
			if(strlen(ng) < 4)
				strncpy(Numero, ng, 3);
		}
		
		void Print(){
			cout << "DADOS DO AGENTE:" << endl;
			cout << "================" << endl;
			cout << "Nome  : " << Nome << endl;
			cout << "Numero: " << Numero << endl;
		}
};

class Agente : public BasAg{
	protected:
		float Altura;
		int Idade;
	public:
		Agente(): BasAg(), Altura(0), Idade(0)
		{}
		
		Agente(const char n[], const char ng[], float a, int i): BasAg(n, ng), Altura(a), Idade(i)
		{}
		
		void Print(){ //Already exists in AgBas class
			BasAg::Print(); //Calls Print() from BasAg class
			cout << "Altura: " << Altura << endl;
			cout << "Idade : " << Idade << endl;
		}
};

int main(){
	Agente Ag("James Bond", "007", 1.90, 35), Ag1;
	
	Ag.Print(); //Calls Agente's Print(); If the object was of BasAg class type, he would call BasAg Print()
	cout << "\n\n";
	Ag1.Print();
	
	system("PAUSE");
	return 0;
}
