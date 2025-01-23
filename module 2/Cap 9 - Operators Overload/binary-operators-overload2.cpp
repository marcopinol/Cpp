#include <iostream>
using namespace std;

class Ponto{
	private:
		int x, y;
	public:
		Ponto(int x1 = 0, int y1 = 0): x(x1), y(y1)
		{}
		
		Ponto operator++(); //Prefixed
		Ponto operator++(int); //Postfixed
		Ponto operator+(Ponto& p) const; //Sum two objects
		Ponto operator+(int n) const; //Sum an integer
		void printP() const;
};

int main(){
	Ponto A(5, 1), B(2, 3), C, D;
	
	cout << "A = ";
	A.printP();
	cout << "B = ";
	B.printP();
	
	C = A + B; //C = A.operator+(B);
	D = A + 5; //D = A.operator+(5);
	
	cout << "C = ";
	C.printP();
	cout << "D = ";
	D.printP();
	
	system("PAUSE");
	return 0;
}

void Ponto::printP() const{
	cout << '(' << x << ',' << y << ')' << endl;
}

Ponto Ponto::operator++(){
	++x;
	++y;
	
	return Ponto(x, y);
}

Ponto Ponto::operator++(int){
	++x;
	++y;
	
	return Ponto(x - 1, y - 1);
}

Ponto Ponto::operator+(Ponto& p) const{
	return Ponto(x + p.x, y + p.y);
}

Ponto Ponto::operator+(int n) const{
	return Ponto(x + n, y + n);
}
