#include <iostream>
using namespace std;

class Data{
	private:
		int dia, mes, ano;
		int bissexto() const{ //inline function //const statement means that can be accessed by const objects
			return (ano % 4 == 0 && (ano % 100 || ano % 400));
		}
	public:
		Data(): dia(1), mes(1), ano(1) //Default constructor; inline
		{}
		Data(int d, int m, int a); //Constructor with arguments; overloading constructor
		void initData(int d, int m, int a); //initialize data
		void printData() const; //const statement means that can be accessed by const objects
		void printSigno() const; //const statement means that can be accessed by const objects
		void printBissexto() const; //const statement means that can be accessed by const objects
};

Data::Data(int d, int m, int a){
	initData(d, m ,a);
}

int main(){
	const Data xmas(25,12,2001);
	
	xmas.printData();
	xmas.printSigno();
	xmas.printBissexto();
	cout << endl;
	
	//Consts objects by default cannot access class's methods without 'const' statement in class's methods, because compiler cannot to assess
	// if the methods will modificate or not the object, so because of this, we tell the compiler which methods will not modify the object with
	// statement 'const' after method's parentheses in method declaration and definition.
		
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

void Data::printData() const{
	char nome[13][10] = {{'z', 'e', 'r', 'o'}, {"Janeiro"}, "Fevereiro", "Abril", "Março", "Maio", "Junho", "Julho", "Agosto",
						 "Setembro", "Outubro", "Novembro", "Dezembro"};
	cout << dia << " de " << nome[mes] << " de " << ano << endl;
}

void Data::printSigno() const{
	char nsigno[14][12] = {"zero", "Capricornio", "Aquario", "Peixes", "Aries", "Touro", "Gemeos", "Cancer", "Leao", "Virgem", 
							"Libra", "Escorpiao", "Sagitario", "Capricornio"};
	int sig[] = {0, 20, 19, 20, 20, 20, 20, 21, 22, 22, 22, 21, 21};
	
	if(dia < sig[mes])
		cout << "Signo: " << nsigno[mes] << endl;
	else
		cout << "Signo: " << nsigno[mes + 1] << endl;
}

void Data::printBissexto() const{
	if(bissexto())
		cout << "Ano eh bissexto." << endl;
	else
		cout << "Ano nao eh bissexto" << endl;	
}
