#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Tempo{
	private:
		int hora;
		int mins;
		int segs;
	public:
		Tempo(): hora(0), mins(0), segs(0)
		{}
		
		Tempo(int h, int m, int s): hora(h), mins(m), segs(s){}
		
		void init(int h, int m, int s){
			hora = h;
			mins = m;
			segs = s;		
		}
		
		void inserirDados();
		
		void mostrarHora();
		
		void soma(Tempo t1, Tempo t2);
		
		void soma(Tempo t);
		
		int getHora(){
			return hora;
		}
		
		Tempo sub(Tempo t1, Tempo t2);
};

class Estacionamento{
	private:
		char chapa[8];
		char marca[20];
		Tempo entrada;
		Tempo saida;
	public:
		Estacionamento(): chapa("\0"), marca("\0")
		{}
		
		Estacionamento(const char ch[], const char m[], Tempo ent, Tempo sai);
		
		void printCar();
		
		float preco(Tempo entra, Tempo said);
		
		void inserirDados();
};

int main(){
	Estacionamento es[5] = {Estacionamento("BRA2E39", "Fiat", Tempo(12, 34, 00), Tempo(14, 54, 00)),
							Estacionamento("RIO4E56", "Volkswagen", Tempo(00, 20, 50), Tempo(10, 34, 45)),
							Estacionamento("GRE5T90", "Audi", Tempo(13, 44, 21), Tempo(17, 44, 21)),
							Estacionamento("TRS7G45", "Mercedes", Tempo(20, 00, 00), Tempo(23, 00, 00)),
							Estacionamento("PYK1M00", "Nissan", Tempo(00, 00, 00), Tempo(12, 00, 00))};
	
	/* data entered by user
	for(int i = 0; i < 5; i++){
		es[i].inserirDados();
		cout << endl;
	}
	*/

	for(int i = 0; i < 5; i++){
		es[i].printCar();
		cout << endl;
	}
		
	system("PAUSE");
	return 0;
}

void Tempo::mostrarHora(){
	cout << setfill('0');
	cout << setw(2) << hora << ':' << setw(2) << mins << ':' << setw(2) << segs << endl;
}

Tempo Tempo::sub(Tempo t1, Tempo t2){ //It should be improved in the scenario when a car pays for overnight stay
	Tempo temp;
	
	temp.hora = t1.hora - t2.hora;
	temp.mins = t1.mins - t2.mins;
	temp.segs = t1.segs - t2.segs;
	
	return temp;
}

Estacionamento::Estacionamento(const char ch[], const char m[], Tempo ent, Tempo sai){
	strncpy(chapa, ch, 8);
	strncpy(marca, m, 20);
	entrada = ent;
	saida = sai;
}

void Estacionamento::printCar(){
	cout << "Chapa do carro: " << chapa << endl;
	cout << "Marca do carro: " << marca << endl;
	cout << "Hora de entrada: ";
	entrada.mostrarHora();
	cout << "Hora de saida: ";
	saida.mostrarHora();
	cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) 
		<< "Valor a ser pago: R$" << Estacionamento::preco(entrada, saida) << endl;
}

float Estacionamento::preco(Tempo entra, Tempo said){
	Tempo temp;
	float valor;
	
	if(entra.getHora() > said.getHora())
		temp = temp.sub(entra, said); //Get the difference between entrada and saida
	else
		temp = temp.sub(said, entra); //Get the difference between saida and entrada
		
	valor = temp.getHora(); //Assigns the hours difference between entrada and saida to calculate the price
	
	return valor;
}

void Estacionamento::inserirDados(){
	cout << "Insira a placa do carro: ";
	cin.getline(chapa, 8);
	cout << "Insira a marca do carro: ";
	cin.getline(marca, 20);
	cout << "*Horario de entrada*\n";
	entrada.inserirDados();
	cout << "*Horario de saida*\n";
	saida.inserirDados();
}

void Tempo::inserirDados(){
	cout << "Digite a hora minutos segundos(hh mm ss): ";
	cin >> hora >> mins >> segs;
	cin.ignore();
}
