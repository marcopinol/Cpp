//Casting ObjA to ObjB can be made in two ways: making a cast method in B class or making a constructor with one arg in class A.
//Cast method:
#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.141592653;

class Graus{
	private:
		double g;
	public:
		Graus(): g(0.0) //Default constructor
		{}
		
		Graus(double x): g(x) //One arg constructor
		{}
		
		void printG(){
			cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << g << "\xF8" << endl;
		}
};

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
		
		operator Graus() const; //Casting function Radianos to Graus
		
		void printR(){
			cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << rad << " rad" << endl;
		}
};

Radianos::operator Graus() const{
	return Graus(180.0 * rad / PI); //Calls Graus(double x) constructor
}

int main(){
	Graus gr;
	Radianos rad(PI);
	
	//gr = rad; //Radianos to Graus; Calls operator Graus() const
	
	gr.printG();
	rad.printR();
	cout << endl;
	
	system("PAUSE");
	return 0;
}
