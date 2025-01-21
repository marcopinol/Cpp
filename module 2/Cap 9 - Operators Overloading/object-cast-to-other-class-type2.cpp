//Casting ObjA to ObjB can be made in two ways: making a cast method in B class or making a constructor with one arg in class A.
//Constructor function:
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
		
		Graus(Radianos R); //Constructor that casts Graus to Radianos
		
		void printG(){
			cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2) << g << "\xF8" << endl;
		}
};

Graus::Graus(Radianos R){
	g = (static_cast<double>(R) * 180.0) / PI;
}

int main(){
	Radianos rad(PI);
	Graus gr(rad); //Calls Graus(Radianos R) constructor to make a Graus object using Radianos object.
	
	gr.printG();
	rad.printR();
	cout << endl;
	
	system("PAUSE");
	return 0;
}
