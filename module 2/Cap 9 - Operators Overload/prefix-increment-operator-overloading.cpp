//Overloading ++ operator of void type
#include <iostream>
using namespace std;

class Ponto{
	private:
		int x,y;
	public:	
		Ponto(int x1 = 0, int y1 = 0): x(x1), y(y1)
		{}
		
		void operator ++(); //Operator function prefixed
		
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
	
	C = A;
	
	cout << "C = ";
	C.printP();
	
	system("PAUSE");
	return 0;
}

void Ponto::operator ++(){
	++x;
	++y;
}

void Ponto::printP() const{
	cout << '(' << x << ',' << y << ')' << endl;
}
