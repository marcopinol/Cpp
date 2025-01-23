#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Cadastro{
	private:
		char Nome[30], Fone[20];
	public:
		void Get(){
			cout << "\tNome: ";
			gets(Nome);
			cout << "\tFone: ";
			gets(Fone);
		}
		
		void Print(){
			cout << "\n\tNome: " << Nome << endl;
			cout << "\tFone: " << Fone << endl;
		}
};

class Imovel{
	private:
		char Endereco[30], Bairro[20];
		float AreaUtil, AreaTotal;
		int Quartos;
	public:
		void Get(){
			cout << "\tEndereco: ";
			gets(Endereco);
			cout << "\tBairro: ";
			gets(Bairro);
			cout << "\tArea Util: ";
			cin >> AreaUtil;
			cout << "\tArea Total: ";
			cin >> AreaTotal;
			cout << "\tNo. Quartos: ";
			cin >> Quartos;
			cin.ignore(10, '\n');
		}
		
		void Print(){
			cout << "\n\tEndereco:  " << Endereco << endl;
			cout << "\tBairro:      " << Bairro << endl;
			cout << "\tArea Util:   " << setiosflags(ios::fixed) << setprecision(2) << AreaUtil << endl;
			cout << "\tArea Total:  " << setiosflags(ios::fixed) << setprecision(2) << AreaTotal << endl;
		}
};

class Tipo{
	private:
		char TipoImovel[20];
	public:
		void Get(){
			cout << "\tTipo: ";
			gets(TipoImovel);
		}
		
		void Print(){
			cout << "\tTipo: " << TipoImovel << endl;
		}
};

class Venda : private Cadastro, Imovel, Tipo{
	private:
		float valor;
	public:
		void Get(){
			cout << "\n ...Propietario: " << endl;
			Cadastro::Get();
			cout << " ...Imovel: " << endl;
			Imovel::Get();
			Tipo::Get();
			cout << "\tValor US$: ";
			cin >> valor;
			cin.ignore(10, '\n');			
		}
		
		void Print(){
			cout << "\n ...Propietario: " << endl;
			Cadastro::Print();
			cout << " ...Imovel: " << endl;
			Imovel::Print();
			Tipo::Print();
			cout << "\tValor US$: " << valor << endl;			
		}
};

class Aluguel : private Cadastro, Imovel, Tipo{
	private:
		float AluguelMensal;
		int Prazo;
		Cadastro Propietario;
	public:
		void Get(){
			cout << "\n ...Propietario: ";
			Propietario.Get();
			cout << " ...Inquilino: ";
			Cadastro::Get();
			cout << " ...Imovel: ";
			Imovel::Get();
			Tipo::Get();
			cout << "\tALuguel: ";
			cin >> AluguelMensal;
			cout << "\tPrazo do contrato: ";
			cin >> Prazo;
			cin.ignore(10, '\n');		
		}
		
		void Print(){
			cout << "\n ...Propietario: ";
			Propietario.Print();
			cout << " ...Inquilino: ";
			Cadastro::Print();
			cout << " ...Imovel: ";
			Imovel::Print();
			Tipo::Print();
			cout << "\tALuguel: "<< AluguelMensal << endl;
			cout << "\tPrazo do contrato: " << Prazo << endl;
		}
};

int main(){
	Venda V;
	Aluguel A;
	
	cout << "\n* Digite os dados do imovel: Venda. " << endl;
	V.Get();
	
	cout << "\n* Digite os dados do imovel: Aluguel. " << endl;
	A.Get();
	
	cout << "\n\n* IMOVEL PARA ALUGUEL:" << endl;
	A.Print();
	
	cout << "\n\n* IMOVEL PARA VENDA:" << endl;
	V.Print();
	
	system("PAUSE");
	return 0;
}
