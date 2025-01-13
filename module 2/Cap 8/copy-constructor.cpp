#include <iostream>
using namespace std;

class Data{
	private:
		int dia, mes, ano;
		int bissexto(){ //inline function
			return (ano % 4 == 0 && (ano % 100 || ano % 400));
		}
	public:
		Data(): dia(1), mes(1), ano(1) //Default constructor; inline
		{}
		Data(int d, int m, int a); //Constructor with arguments; overloading constructor
		void initData(int d, int m, int a); //initialize data
		void printData();
		void printSigno();
		void printBissexto();
};

Data::Data(int d, int m, int a){
	initData(d, m ,a);
}

int main(){
	Data w; //Default constructor
	Data y(12, 1, 1976); //Constructor with 3 arguments
	Data z(y); //or Data z = y; Copy constructor
	Data x = y; //or Data x(y); Copy constructor
	w = y; //Assignment operator. Isn't copy constructor
	
	//Every time when we create an class, the compiler adds to them two functions: one constructor denominated "copy constructor"
	// and an overload method for the assignment operator (=);
		
	system("PAUSE");
	return 0;
}

void Data::initData(int d, int m, int a){ //The "::" is a scope resolution operator, this defines that initData() can only be used by an Data class object.
	int dmes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	ano = a > 0 ? a : 1; //Validates the year
	dmes[2] = dmes[2] + bissexto();
	mes = m >= 1 && m <= 12 ? m : 1; //Validates the month
	dia = d >= 1 && d <= dmes[mes] ? d : 1; //Validates the day 
}

void Data::printData(){
	char nome[13][10] = {{'z', 'e', 'r', 'o'}, {"Janeiro"}, "Fevereiro", "Abril", "Março", "Maio", "Junho", "Julho", "Agosto",
						 "Setembro", "Outubro", "Novembro", "Dezembro"};
	cout << dia << " de " << nome[mes] << " de " << ano << endl;
}

void Data::printSigno(){
	char nsigno[14][12] = {"zero", "Capricornio", "Aquario", "Peixes", "Aries", "Touro", "Gemeos", "Cancer", "Leao", "Virgem", 
							"Libra", "Escorpiao", "Sagitario", "Capricornio"};
	int sig[] = {0, 20, 19, 20, 20, 20, 20, 21, 22, 22, 22, 21, 21};
	
	if(dia < sig[mes])
		cout << "Signo: " << nsigno[mes] << endl;
	else
		cout << "Signo: " << nsigno[mes + 1] << endl;
}

void Data::printBissexto(){
	if(bissexto())
		cout << "Ano eh bissexto." << endl;
	else
		cout << "Ano nao eh bissexto" << endl;	
}
