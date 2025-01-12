#include <iostream>
#include <iomanip> //for manipulators use
using namespace std;

namespace fpoint {
	float lapis, borrachas, canetas, cadernos, fitas;
}

int main() {
	//Without field size
	//Without manipulators
	int lapis = 45, borrachas = 2345, canetas = 420, cadernos = 8, fitas = 13050;
	cout << "\n\n\n";
	cout << '\n' << "Lapis          " << lapis;
	cout << '\n' << "Borrachas      " << borrachas;
	cout << '\n' << "Canetas        " << canetas;
	cout << '\n' << "Cadernos       " << cadernos;
	cout << '\n' << "Fitas          " << fitas << '\n' << endl;
	
	system("PAUSE");
	
	//With field size
	//With manipulators
	cout << setfill('.'); //manipulator
	cout << '\n' << "Lapis          " << setw(12) << lapis; //setw is a fieldsize print limiter
	cout << '\n' << "Borrachas      " << setw(12) << borrachas;
	cout << '\n' << "Canetas        " << setw(12) << canetas;
	cout << '\n' << "Cadernos       " << setw(12) << cadernos;
	cout << '\n' << "Fitas          " << setw(12) << fitas << '\n' << endl;
	
	system("PAUSE");
	
	//Fieldsizes for float
	//Uses setw manipulator, setiosflags and setprecision
	fpoint::lapis =4.875, fpoint::borrachas = 234.542, fpoint::canetas = 42.036, fpoint::cadernos = 8.0, fpoint::fitas = 13.05;
	cout << setfill(' ');
	cout << "\n\n\n";
	cout << setiosflags(ios::fixed) /* decimal point (not exponecial) */ 
	<< setiosflags(ios::showpoint) /* always print decimal point */ 
	<< setprecision(2); //two decimal places
	cout << '\n' << "Lapis          " << setw(12) << fpoint::lapis; //fieldsize = 12
	cout << '\n' << "Borrachas      " << setw(12) << fpoint::borrachas;
	cout << '\n' << "Canetas        " << setw(12) << fpoint::canetas;
	cout << '\n' << "Cadernos       " << setw(12) << fpoint::cadernos;
	cout << '\n' << "Fitas          " << setw(12) << fpoint::fitas << '\n' << endl;
	
	system("PAUSE");
	
	//Fieldsize for charset
	cout << '\n' << "OBJETO         " << setw(12) << "CODIGO" << endl;
	cout << '\n' << "Lapis          " << setw(12) << "WQR";
	cout << '\n' << "Borrachas      " << setw(12) << "ASO";
	cout << '\n' << "Canetas        " << setw(12) << "KPX";
	cout << '\n' << "Cadernos       " << setw(12) << "FJI";
	cout << '\n' << "Fitas          " << setw(12) << "TYE" << endl;
		
	return 0;
}