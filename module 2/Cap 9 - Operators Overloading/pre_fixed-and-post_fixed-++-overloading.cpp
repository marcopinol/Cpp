//Overloading of the prefixed and postfixed ++ operator
//The code below is valid to -- operator, because it can be prefixed or postfixed too.
#include <iostream>
using namespace std;

class Ponto{
	private:
		int x, y;
	public:
		Ponto(int x1 = 0, int y1 = 0): x(x1), y(y1)
		{}
		
		Ponto operator ++(); //prefixed
		Ponto operator ++(int); //postfixed
		void printP();
};

int main(){
	Ponto A, B(2,3);
	
	cout << "++A = ";
	(++A).printP(); //Increments and after this uses it
	
	cout << "B++ = ";
	(B++).printP(); //Uses it and after this increments it

	cout << " A = ";
	A.printP();
	cout << " B = ";
	B.printP();
			
	system("PAUSE");
	return 0;
}

Ponto Ponto::operator ++(){ //If the operator function is declared and defined without an int parameter, that means this is a prefixed operator function
	++x;
	++y;
	
	return Ponto(x, y);
}

Ponto Ponto::operator ++(int){ //The int parameter is only to tell compiler that this operator function is postfixed and it will be ignored
	++x;
	++y;
	
	return Ponto(x - 1, y - 1);
}

void Ponto::printP(){
	cout << '(' << x << ',' << y << ')' << endl;
}
