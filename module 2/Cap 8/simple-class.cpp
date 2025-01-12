#include <iostream>
using namespace std;

class Retangulo{ //class definition
	private:
		int base, altura; //Data member
	public:
		void init(int b, int h){ //Member function to initialize data
			base = b;
			altura = h;
		}
		void printData(){ //Member function that shows data
			cout << "Base = " << base << "\tAltura = " << altura;
			cout << "\tArea = " << (base * altura) << endl;
		}
};

int main(){
	Retangulo x, y; //Two Retangulo objects
	
	x.init(5, 3); //Calls the member function to initialize it
	y.init(10, 6); //Same thing
	
	x.printData();
	y.printData();
	
	system("PAUSE");
	return 0;
}
