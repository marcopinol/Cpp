#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Conta{ //Abstract class
	private:
		static const int TAM = 80; //Name max size
		char Nome[TAM]; //Customer name
		int Numero; //account's number
		float SaldoBase; //Money
	public:
		void Get(){
			cout << "  Nome: ";
			gets(Nome);
			cout << "  No.Conta: ";
			cin >> Numero;
			cout << "  Saldo : ";
			cin >> SaldoBase;
			cin.ignore(10, '\n'); //clears input
		}
		
		void Print(){
			cout << "  Nome: " << Nome << endl;
			cout << "  No.Conta: " << Numero << endl;
			cout << "  Saldo: " << setiosflags(ios::fixed) << setprecision(2) << SaldoBase << endl;
		}
		
		float Saldo(){
			return SaldoBase;
		}
};

class ContaSimples : public Conta
{};

class ContaEspecial : public Conta{
	private:
		float Limite;
	public:
		void Get(){
			Conta::Get();
			cout << "  Limite: ";
			cin >> Limite;
			cin.ignore(10, '\n'); //clears input
		}
		
		void Print(){
			Conta::Print();
			cout << "  Limite: " << Limite << endl;
			cout << "  Saldo Total: " << setiosflags(ios::fixed) << setprecision(2)<< (Saldo() + Limite) << endl;
		}
};

class ContaPoupanca : public Conta{
	private:
		float Taxa;
	public:
		void Get(){
			Conta::Get();
			cout << "  Taxa: ";
			cin >> Taxa;
			cin.ignore(10, '\n');
		}
		
		void Print(){
			Conta::Print();
			cout << "  Taxa: " << Taxa << endl;
			cout << "  Saldo Total: " << setiosflags(ios::fixed) << setprecision(2) << (Saldo() * Taxa) << endl;
		}
};

int main(){
	ContaSimples c1, c2;
	ContaEspecial c3;
	ContaPoupanca c4;
	
	cout << "\n* Digite os dados da conta simples 1. " << endl;
	c1.Get();	
	cout << "\n* Digite os dados da conta simples 2. " << endl;
	c2.Get();	
	cout << "\n* Digite os dados da conta especial. " << endl;
	c3.Get();
	cout << "\n* Digite os dados da conta poupanca. " << endl;
	c4.Get();
	
	cout << "\n\n Conta Simples 1.\n";
	c1.Print();
	cout << "\n\n Conta Simples 2.\n";
	c2.Print();
	cout << "\n\n Conta Especial.\n";
	c3.Print();
	cout << "\n\n Conta Poupanca\n";
	c4.Print();
	cout << endl;
	
	system("PAUSE");
	return 0;
}
