#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Cadastro{
	private:
		char Nome[30], Fone[20];
	public:
		Cadastro(){ //Default constructor
			Nome[0] = Fone[0] = '\0';
		}
		
		Cadastro(const char n[], const char f[]){
			strncpy(Nome, n, 29);
			Nome[29] = '\0'; //Delimiting string's end to avoid buffer overflows
			strncpy(Fone, f, 19);
			Fone[29] = '\0'; //Delimiting string's end to avoid buffer overflows
		}
		
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
		Imovel(): AreaUtil(0.0), AreaTotal(0.0), Quartos(0){ //Default constructor
			Endereco[0] = Bairro[0] = '\0';
		}
		
		Imovel(const char e[], const char b[], float au, float at, int q): AreaUtil(au), AreaTotal(at), Quartos(q){
			strncpy(Endereco, e, 29);
			Endereco[29] = '\0'; //Delimiting string's end to avoid buffer overflows
			strncpy(Bairro, b, 19);
			Bairro[19] = '\0'; //Delimiting string's end to avoid buffer overflows
		}
		
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
		Tipo(){ //Default constructor
			TipoImovel[0] = '\0';
		}
		
		Tipo(const char t[]){
			strncpy(TipoImovel, t, 19);
			TipoImovel[19] = '\0'; //Delimiting string's end to avoid buffer overflows
		}
		
		void Get(){
			cout << "\tTipo: ";
			gets(TipoImovel);
		}
		
		void Print(){
			cout << "\tTipo: " << TipoImovel << endl;
		}
};

class Venda : private Cadastro, private Imovel, private Tipo{
	private:
		float valor;
	public:
		Venda(): Cadastro(), Imovel(), Tipo(), valor(0.0) //Default constructor
		{}
		
		Venda(const char n[], const char f[], const char e[], const char b[], 
				float au, float at, int q, 
				const char t[], float vlr): Cadastro(n, f), Imovel(e, b, au, at, q), Tipo(t), valor(vlr)
				{}
		
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

class Aluguel : private Cadastro, private Imovel, private Tipo{
	private:
		float AluguelMensal;
		int Prazo;
		Cadastro Proprietario;
	public:
		Aluguel(): Cadastro(), Imovel(), Tipo(), AluguelMensal(0.0), Prazo(0) //Default constructor
		{}
		
		Aluguel(const char n[], const char f[], const char e[], const char b[], 
				float au, float at, int q, const char t[], float am, int p, const char prop[], const char foneprop[]): Cadastro(n, f), 
				Imovel(e, b, au, at, q), Tipo(t), AluguelMensal(am), Prazo(p), Proprietario(prop, foneprop){}
		
		void Get(){
			cout << "\n ...Propietario: ";
			Proprietario.Get();
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
			Proprietario.Print();
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
