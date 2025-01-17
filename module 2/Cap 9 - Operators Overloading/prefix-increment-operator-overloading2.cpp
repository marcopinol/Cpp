//Overloading ++ operator of Ponto type
//And modifying return to use a nameless temporary object
#include <iostream>
using namespace std;

class Ponto{
	private:
		int x,y;
	public:	
		Ponto(int x1 = 0, int y1 = 0): x(x1), y(y1)
		{}
		
		Ponto operator ++(); //Operator function prefixed
		
		void printP() const; //Prints Ponto
};

int main(){
	Ponto A, B(2, 3), C; 
	
	cout << "A = ";
	A.printP();
	cout << "B = ";
	B.printP();
	
	++A; //increments A
	++B; //increments B
	
	cout << "++A = ";
	A.printP();
	cout << "++B = ";
	B.printP();
	
	C = ++A; //Now we can do this operation;
	
	cout << "C = ";
	C.printP();
	cout << "++C = ";
	(++C).printP();
	
	system("PAUSE");
	return 0;
}

Ponto Ponto::operator ++(){
	++x;
	++y;
	
	return Ponto(x, y); //Runs the contructor and creates a nameless temporary object
}

void Ponto::printP() const{
	cout << '(' << x << ',' << y << ')' << endl;
}
