//Making both conversions
//They must be on the same class
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.141592653;

class Radianos{
	private:
		double rad;
	public:
		Radianos(): rad(0.0) //Default constructor
		{}
		
		Radianos(double r): rad(r) //One arg constructor
		{}
		
		operator double(){ //double type converter
			return rad;
		}		
		
		void printR(){
			cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << rad << " rad" << endl;
		}
};

class Graus{
	private:
		double g;
	public:
		Graus(): g(0.0) //Default constructor
		{}
		
		Graus(double x): g(x) //One arg constructor
		{}
		
		Graus(Radianos R); //Constructor that casts Radianos to Graus
		operator Radianos() const; //Casting function Graus to Radianos
		
		void printG(){
			cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << g << "\xF8" << endl;
		}
};

Graus::Graus(Radianos R){ //Radianos to Graus
	g = (static_cast<double>(R) * 180.0) / PI;
}

Graus::operator Radianos() const{ //Graus to Radianos
	return Radianos(g * PI / 180.0);
}

int main(){
	Graus gr, gA(180.0);
	Radianos rad(PI), rA;
	
	gr = rad; //Casts Radianos to Graus
	rA = gA; //rA = gA.operator Radianos();
	
	gr.printG();
	rA.printR();
	cout << endl;
	
	system("PAUSE");
	return 0;
}
